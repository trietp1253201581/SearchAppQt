#include "SearchVisualizer.h"
#include <QPainter>
#include <QThread>
#include <QTimer>
#include <QCoreApplication>
#include <QFont>
#include <bits/stdc++.h>
using namespace std;

SearchVisualizer::SearchVisualizer(QWidget *parent): QWidget(parent) {
    highlightedIndex = -1;
    foundIndex = -1;
    setFixedSize(900, 300);
    qTimer = new QTimer(this);
    connect(qTimer, &QTimer::timeout, this, &SearchVisualizer::startVisualization);
}

void SearchVisualizer::setData(vector<int> data) {
    this->data = data;
}

void SearchVisualizer::prepareSize() {
    int dataSize = (int) data.size();
    rectSize = min(width() / (dataSize + 3), height() * 2 / 3);
    xOffset = (width() - dataSize * rectSize) / 2;
    yOffset = (height() - rectSize) / 2;
}

void SearchVisualizer::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    int dataSize = (int) data.size();
    prepareSize();
    for (int i = 0; i < dataSize; i++) {
        int x = xOffset + i * rectSize;
        int y = yOffset;
        QRect rect(x, y, rectSize, rectSize);
        if (i == foundIndex) painter.setBrush(Qt::green);
        else if (i == highlightedIndex) painter.setBrush(Qt::red);
        else painter.setBrush(Qt::blue);
        painter.drawRect(rect);

        painter.setPen(Qt::white);
        if (data[i] < INT_MAX) {
            painter.drawText(rect, Qt::AlignCenter, QString::number(data[i]));
        } else {
            painter.drawText(rect, Qt::AlignCenter, "inf");
        }

        painter.drawText(QRect(x, yOffset + 40, rectSize, 20), Qt::AlignCenter, QString::fromStdString(to_string(i)));
    }
    QString labelText = QString("Đang tìm phần tử có giá trị: %1").arg(target);
    QFont qFont = painter.font();
    qFont.setPointSize(16);
    qFont.setBold(true);
    painter.setFont(qFont);
    painter.setPen(Qt::white);
    painter.drawText(rect(), Qt::AlignTop | Qt::AlignHCenter, labelText);
}

void SearchVisualizer::highlightElement(int index) {
    highlightedIndex = index;
    update();
    QCoreApplication::processEvents();
    QThread::msleep(1500);
}

void SearchVisualizer::highlightFoundElement(int index) {
    foundIndex = index;
    update();
    QCoreApplication::processEvents();
    QThread::msleep(1500);
}

void SearchVisualizer::visualize(int target) {
    highlightedIndex = -1;
    foundIndex = -1;
    this->target = target;
    qTimer->start(2500);
}
