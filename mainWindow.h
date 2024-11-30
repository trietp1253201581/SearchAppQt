#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Reader.h"
#include "Searcher.h"
#include "SearchContext.h"
#include <bits/stdc++.h>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_inputByFileBtn_clicked();

    void on_generateInputBtn_clicked();

    void on_inputArrayBtn_clicked();

    void on_search_clicked();

private:
    Ui::MainWindow *ui;
    Reader reader;
    vector<int> inputArr;
    vector<int> searchValues;
    vector<Searcher*> searchers;
    SearchContext searchContext;
    string result;
};
#endif // MAINWINDOW_H
