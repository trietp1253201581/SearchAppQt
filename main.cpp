#include "mainWindow.h"
#include <bits/stdc++.h>
#include "ArrGenerator.h"
#include "RandomizeArrGenerator.h"
#include "FileIO.h"
#include <QApplication>
#include "FibonacciSearcher.h"
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    FibonacciSearcher* s = new FibonacciSearcher();
    vector<int> arr = {1, 4, 7, 9, 10, 12, 13, 16, 18, 21};
    s->setArr(arr);
    cout << s->search(4) << endl;
    return a.exec();
}
