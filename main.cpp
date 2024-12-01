#include "mainWindow.h"
#include <bits/stdc++.h>
#include "LinearSearcher.h"
#include "BinarySearcher.h"
#include "TernarySearcher.h"
#include "JumpSearcher.h"
#include "SearchContext.h"
#include "Searcher.h"
#include "Reader.h"
#include <QApplication>
#include "FileIO.h"
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    string s = " 1 312   5 8 99  ";
    string fileDir = "/SearchAppQt/exa.txt";
    string b = FileIO::read(fileDir);
    cout << b << endl;
    return a.exec();
}
