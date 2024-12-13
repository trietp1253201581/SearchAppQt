#ifndef TERNARYSEARCHVISUALIZER_H
#define TERNARYSEARCHVISUALIZER_H

#include "SearchVisualizer.h"
#include <QWidget>

class TernarySearchVisualizer: public SearchVisualizer {
    Q_OBJECT
protected:
    int leftIndex;
    int rightIndex;
    int mid1Index;
    int mid2Index;
    void setIndex(int leftIndex, int rightIndex, int mid1Index, int mid2Index);
    void paintEvent(QPaintEvent *event) override;
public:
    explicit TernarySearchVisualizer(QWidget *parent = nullptr);
    void startVisualization() override;
    void visualize(int target) override;
};

#endif // TERNARYSEARCHVISUALIZER_H
