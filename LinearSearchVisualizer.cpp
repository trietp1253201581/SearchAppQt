#include "SearchVisualizer.h"
#include "LinearSearchVisualizer.h"
#include <bits/stdc++.h>
#include <QWidget>
using namespace std;

LinearSearchVisualizer::LinearSearchVisualizer(QWidget *parent): SearchVisualizer(parent) {}

void LinearSearchVisualizer::startVisualization() {
    qTimer->stop();
    int dataSize = (int) data.size();
    for (int i = 0; i < dataSize; i++) {
        highlightElement(i);
        if (data[i] == this->target) {
            highlightFoundElement(i);
            return;
        }
    }
}
