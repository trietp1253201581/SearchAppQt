#ifndef EXPONENTIALSEARCHVISUALIZER_H
#define EXPONENTIALSEARCHVISUALIZER_H

#include "SearchVisualizer.h"
#include <QWidget>

class ExponentialSearchVisualizer: public SearchVisualizer {
    Q_OBJECT
protected:
    int leftIndex;
    int rightIndex;
    int midIndex;
    int posIndex;
    void setIndex(int leftIndex, int rightIndex, int midIndex, int posIndex);
    void paintEvent(QPaintEvent *event) override;
public:
    explicit ExponentialSearchVisualizer(QWidget *parent = nullptr);
    void startVisualization() override;
    void visualize(int target) override;
};

#endif // EXPONENTIALSEARCHVISUALIZER_H
