#include "mainWindow.h"
#include <bits/stdc++.h>
#include "ArrGenerator.h"
#include "RandomizeArrGenerator.h"
#include "FileIO.h"
#include <QApplication>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
