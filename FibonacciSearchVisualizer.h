#ifndef FIBONACCISEARCHVISUALIZER_H
#define FIBONACCISEARCHVISUALIZER_H

#include "SearchVisualizer.h"
#include <QWidget>

class FibonacciSearchVisualizer: public SearchVisualizer {
    Q_OBJECT
protected:
    int nowIndex;
    int fib0;
    int fib1;
    int fib2;
    void setIndex(int nowIndex);
    void paintEvent(QPaintEvent *event) override;
public:
    explicit FibonacciSearchVisualizer(QWidget *parent = nullptr);
    void startVisualization() override;
    void visualize(int target) override;
};

#endif // FIBONACCISEARCHVISUALIZER_H
