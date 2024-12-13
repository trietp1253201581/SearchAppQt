#ifndef BINARYSEARCHVISUALIZER_H
#define BINARYSEARCHVISUALIZER_H

#include "SearchVisualizer.h"
#include <QWidget>

class BinarySearchVisualizer: public SearchVisualizer {
    Q_OBJECT
protected:
    int leftIndex;
    int rightIndex;
    int midIndex;
    void setIndex(int leftIndex, int rightIndex, int midIndex);
    void paintEvent(QPaintEvent *event) override;
public:
    explicit BinarySearchVisualizer(QWidget *parent = nullptr);
    void startVisualization() override;
    void visualize(int target) override;
};

#endif // BINARYSEARCHVISUALIZER_H
