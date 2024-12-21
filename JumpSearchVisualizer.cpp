#include "SearchVisualizer.h"
#include "JumpSearchVisualizer.h"
#include <bits/stdc++.h>
#include <QWidget>
#include <QPainter>
using namespace std;

JumpSearchVisualizer::JumpSearchVisualizer(QWidget *parent): SearchVisualizer(parent) {
    prevIndex = -1;
    lowerIndex = -1;
    upperIndex = -1;
}

void JumpSearchVisualizer::setIndex(int prevIndex, int lowerIndex, int upperIndex) {
    this->prevIndex = prevIndex;
    this->lowerIndex = lowerIndex;
    this->upperIndex = upperIndex;
}

void JumpSearchVisualizer::visualize(int target) {
    setIndex(-1, -1, -1);
    SearchVisualizer::visualize(target);
}

void JumpSearchVisualizer::startVisualization() {
    qTimer->stop();
    int step = max(1, (int) floor(sqrt((int) data.size())));
    int prev = 0, dataSize = (int) data.size();
    while (data[prev] < target) {
        setIndex(prev, -1, -1);
        highlightElement(prev);
        prev += step;
        if (prev >= dataSize) {
            break;
        }
    }
    prev -= step;

    int lower = max(0, prev), upper = min(dataSize, prev + step);
    setIndex(-1, lower, upper);
    for (int i = lower; i <= upper; i++) {
        highlightElement(i);
        if (data[i] == target) {
            highlightFoundElement(i);
            return;
        }
    }
    setIndex(-1, -1, -1);
}

void JumpSearchVisualizer::paintEvent(QPaintEvent *event) {
    SearchVisualizer::paintEvent(event);

    QPainter painter(this);
    SearchVisualizer::prepareSize();
    int yOffsetForText = 20;
    if (prevIndex != -1) {
        int prevX = xOffset + prevIndex * rectSize;
        int step = max(1, (int) floor(sqrt((int) data.size())));
        painter.drawText(QRect(prevX, yOffset - yOffsetForText, rectSize, 20), Qt::AlignCenter, "prev");
        QString labelText = QString("step = %1, prev = %2 + %1 = %3")
                                .arg(QString::number(step),
                                     QString::number(max(0, prevIndex - step)),
                                     QString::number(prevIndex));

        if (prevIndex != 0) painter.drawText(QRect(xOffset + 100, yOffset - 75, 500, 20), Qt::AlignCenter, labelText);
    }
    if (lowerIndex != -1) {
        int lowerX = xOffset + lowerIndex * rectSize;
        painter.drawText(QRect(lowerX, yOffset - yOffsetForText, rectSize, 20), Qt::AlignCenter, "lower");
    }
    if (upperIndex != -1) {
        int upperX = xOffset + upperIndex * rectSize;
        painter.drawText(QRect(upperX, yOffset - yOffsetForText, rectSize, 20), Qt::AlignCenter, "upper");
    }
}
