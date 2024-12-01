#include "mainWindow.h"
#include "./ui_mainWindow.h"
#include <bits/stdc++.h>
#include "LinearSearcher.h"
#include "BinarySearcher.h"
#include "TernarySearcher.h"
#include "JumpSearcher.h"
#include "QFileDialog"
#include "FileIO.h"
#include "Reader.h"
#include "AscendingArrGenerator.h"
#include "DescendingArrGenerator.h"
#include "RandomizeArrGenerator.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_inputByFileBtn_clicked() {
    QString qFileDir = QFileDialog::getOpenFileName(this, "Open file",
                                                    "", "All Files (*.*)");
    string fileDir = qFileDir.toStdString();
    string data = FileIO::read(fileDir);
    ui->inputArrayEdit->setPlainText(QString::fromStdString(data));
}

void MainWindow::on_generateInputBtn_clicked() {
    string sizeStr = ui->inputSizeEdit->text().toStdString();
    Reader reader;
    reader.read(sizeStr);
    int size = reader.getInputArr()[0];

    string generator = ui->generateTypeBox->currentText().toStdString();
    if (generator == "Ascending") {
        arrGenerator = new AscendingArrGenerator();
    } else if (generator == "Descending") {
        arrGenerator = new DescendingArrGenerator();
    } else {
        arrGenerator = new RandomizeArrGenerator();
    }
    arrGenerator->generate(size);
    string inputArrStr = arrGenerator->getGeneratedArrStr();
    ui->inputArrayEdit->setPlainText(QString::fromStdString(inputArrStr));
}


void MainWindow::on_inputArrayBtn_clicked() {
    QString qData = ui->inputArrayEdit->toPlainText();
    string data = qData.toStdString();
    Reader reader;
    reader.read(data);
    inputArr = reader.getInputArr();
    cout << inputArr.size() << endl;
}

void MainWindow::on_search_clicked() {
    string searchValuesStr = ui->searchValueEdit->text().toStdString();
    Reader reader;
    reader.read(searchValuesStr);
    searchValues = reader.getInputArr();
    searchers.clear();
    if (ui->linearSearchCheck->isChecked()) {
        searchers.push_back(new LinearSearcher(inputArr));
    }
    if (ui->binarySearchCheck->isChecked()) {
        searchers.push_back(new BinarySearcher(inputArr));
    }
    if (ui->ternarySearchCheck->isChecked()) {
        searchers.push_back(new TernarySearcher(inputArr));
    }
    if (ui->jumpSearchCheck->isChecked()) {
        searchers.push_back(new JumpSearcher(inputArr));
    }
    cout << searchers.size() << endl;
    result = "";
    for (Searcher* searcher: searchers) {
        result += "<<<" + searcher->getAlgorithm() + ">>>" + "\n";
        searchContext.setSearcher(searcher);
        for (int value: searchValues) {
            result += searchContext.executeSearch(value);
            cout << searchContext.getSearcher()->getArr().size() << endl;
        }
        result += "..Total: ";
        ostringstream outBuild;
        double totalBuildTime = searchContext.getSearcher()->getTotalBuildTime();
        outBuild << fixed << setprecision(3) << totalBuildTime;
        result += "build time = " + outBuild.str() + " ms";
        ostringstream outSearch;
        double totalSearchTime = searchContext.getSearcher()->getTotalSearchTime();
        outSearch << fixed << setprecision(3) << totalSearchTime;
        result += ", search time = " + outSearch.str() + " ms";
        result += ".\n";
    }
    ui->resultLog->setPlainText(QString::fromStdString(result));
}

