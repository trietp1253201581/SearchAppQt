#ifndef LINEARSEARCHVISUALIZER_H
#define LINEARSEARCHVISUALIZER_H

#include "SearchVisualizer.h"
#include <QWidget>

class LinearSearchVisualizer: public SearchVisualizer {
    Q_OBJECT
public:
    explicit LinearSearchVisualizer(QWidget *parent = nullptr);
    void startVisualization() override;
};

#endif // LINEARSEARCHVISUALIZER_H
