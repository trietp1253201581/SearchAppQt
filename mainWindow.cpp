#include "mainWindow.h"
#include "./ui_mainWindow.h"
#include <bits/stdc++.h>
#include "LinearSearcher.h"
#include "BinarySearcher.h"
#include "TernarySearcher.h"
#include "JumpSearcher.h"
#include "ExponentialSearcher.h"
#include "InterpolationSearcher.h"
#include "HashingSearcher.h"
#include "FibonacciSearcher.h"
#include "QFileDialog"
#include "FileIO.h"
#include "Reader.h"
#include "AscendingArrGenerator.h"
#include "DescendingArrGenerator.h"
#include "RandomizeArrGenerator.h"
#include "LinearSearchVisualizer.h"
#include "BinarySearchVIsualizer.h"
#include "TernarySearchVisualizer.h"
#include "JumpSearchVisualizer.h"
#include "ExponentialSearchVisualizer.h"

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
    if (ui->exponentialSearchCheck->isChecked()) {
        searchers.push_back(new ExponentialSearcher(inputArr));
    }
    if (ui->interpolationSearchCheck->isChecked()) {
        searchers.push_back(new InterpolationSearcher(inputArr));
    }
    if (ui->hashingSearchCheck->isChecked()) {
        searchers.push_back(new HashingSearcher(inputArr));
    }
    if (ui->fibonacciSearchCheck->isChecked()) {
        searchers.push_back(new FibonacciSearcher(inputArr));
    }
    result = "";
    for (Searcher* searcher: searchers) {
        result += "<<<" + searcher->getAlgorithm() + ">>>" + "\n";
        searchContext.setSearcher(searcher);
        for (int value: searchValues) {
            result += searchContext.executeSearch(value);
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

const vector<int> MainWindow::sampleData = {1, 2, 4, 7, 9, 19, 22, 23, 31, 50, 96, 155, 1000, 3942, 5000,
                                            9630, 10000, 12333, 23443, 56732, 91234};

void MainWindow::visualize(int target) {
    searchVisualizer->setData(sampleData);
    searchVisualizer->visualize(target);
    searchVisualizer->show();
}

void MainWindow::on_viewLinearSearchBtn_clicked() {
    searchVisualizer = new LinearSearchVisualizer();
    visualize(10000);
}


void MainWindow::on_viewBinarySearchBtn_clicked() {
    searchVisualizer = new BinarySearchVisualizer();
    visualize(10000);
}


void MainWindow::on_viewTernarySearchBtn_clicked() {
    searchVisualizer = new TernarySearchVisualizer();
    visualize(10000);
}


void MainWindow::on_viewJumpSearchBtn_clicked() {
    searchVisualizer = new JumpSearchVisualizer();
    visualize(10000);
}


void MainWindow::on_viewExponentialSearchBtn_clicked() {
    searchVisualizer = new ExponentialSearchVisualizer();
    visualize(10000);
}

