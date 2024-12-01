#include "mainWindow.h"
#include <bits/stdc++.h>
#include "ArrGenerator.h"
#include "RandomizeArrGenerator.h"
#include <QApplication>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    ArrGenerator *generator;
    generator = new RandomizeArrGenerator();
    generator->generate(10);
    vector<int> arr = generator->getGeneratedArr();
    for (int i = 0; i < (int) arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return a.exec();
}
