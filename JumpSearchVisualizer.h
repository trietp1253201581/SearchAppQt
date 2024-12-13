#ifndef JUMPSEARCHVISUALIZER_H
#define JUMPSEARCHVISUALIZER_H

#include "SearchVisualizer.h"
#include <QWidget>

class JumpSearchVisualizer: public SearchVisualizer {
    Q_OBJECT
protected:
    int prevIndex;
    int lowerIndex;
    int upperIndex;
    void setIndex(int prevIndex, int lowerIndex, int upperIndex);
    void paintEvent(QPaintEvent *event) override;
public:
    explicit JumpSearchVisualizer(QWidget *parent = nullptr);
    void startVisualization() override;
    void visualize(int target) override;
};

#endif // JUMPSEARCHVISUALIZER_H
