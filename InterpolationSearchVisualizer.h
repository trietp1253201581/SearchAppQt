#ifndef INTERPOLATIONSEARCHVISUALIZER_H
#define INTERPOLATIONSEARCHVISUALIZER_H

#include "SearchVisualizer.h"
#include <QWidget>

class InterpolationSearchVisualizer: public SearchVisualizer {
    Q_OBJECT
protected:
    int leftIndex;
    int rightIndex;
    int posIndex;
    void setIndex(int leftIndex, int rightIndex, int posIndex);
    void paintEvent(QPaintEvent *event) override;
public:
    explicit InterpolationSearchVisualizer(QWidget *parent = nullptr);
    void startVisualization() override;
    void visualize(int target) override;
};

#endif // INTERPOLATIONSEARCHVISUALIZER_H
