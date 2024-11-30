/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *inputArrayEdit;
    QPushButton *inputByFileBtn;
    QPushButton *generateInputBtn;
    QLabel *label_2;
    QLineEdit *inputSizeEdit;
    QLabel *label_3;
    QComboBox *generateTypeBox;
    QPushButton *inputArrayBtn;
    QLabel *label_4;
    QLineEdit *searchValueEdit;
    QLabel *label_5;
    QCheckBox *linearSearchCheck;
    QCheckBox *binarySearchCheck;
    QCheckBox *ternarySearchCheck;
    QCheckBox *jumpSearchCheck;
    QPushButton *search;
    QCheckBox *exponentialSearchCheck;
    QCheckBox *interpolationSearchCheck;
    QCheckBox *hashingSearchCheck;
    QScrollArea *scrollForLog;
    QWidget *scrollAreaWidgetContents_4;
    QTextEdit *resultLog;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(620, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 100, 30));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 50, 600, 60));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 598, 58));
        inputArrayEdit = new QTextEdit(scrollAreaWidgetContents);
        inputArrayEdit->setObjectName("inputArrayEdit");
        inputArrayEdit->setGeometry(QRect(0, 0, 600, 60));
        scrollArea->setWidget(scrollAreaWidgetContents);
        inputByFileBtn = new QPushButton(centralwidget);
        inputByFileBtn->setObjectName("inputByFileBtn");
        inputByFileBtn->setGeometry(QRect(150, 10, 80, 30));
        generateInputBtn = new QPushButton(centralwidget);
        generateInputBtn->setObjectName("generateInputBtn");
        generateInputBtn->setGeometry(QRect(500, 120, 110, 30));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 120, 70, 30));
        inputSizeEdit = new QLineEdit(centralwidget);
        inputSizeEdit->setObjectName("inputSizeEdit");
        inputSizeEdit->setGeometry(QRect(70, 120, 90, 30));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 120, 121, 30));
        generateTypeBox = new QComboBox(centralwidget);
        generateTypeBox->addItem(QString());
        generateTypeBox->addItem(QString());
        generateTypeBox->addItem(QString());
        generateTypeBox->setObjectName("generateTypeBox");
        generateTypeBox->setGeometry(QRect(320, 120, 120, 30));
        inputArrayBtn = new QPushButton(centralwidget);
        inputArrayBtn->setObjectName("inputArrayBtn");
        inputArrayBtn->setGeometry(QRect(250, 160, 125, 30));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 200, 100, 30));
        searchValueEdit = new QLineEdit(centralwidget);
        searchValueEdit->setObjectName("searchValueEdit");
        searchValueEdit->setGeometry(QRect(150, 200, 461, 30));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 240, 131, 30));
        linearSearchCheck = new QCheckBox(centralwidget);
        linearSearchCheck->setObjectName("linearSearchCheck");
        linearSearchCheck->setGeometry(QRect(150, 240, 80, 30));
        binarySearchCheck = new QCheckBox(centralwidget);
        binarySearchCheck->setObjectName("binarySearchCheck");
        binarySearchCheck->setGeometry(QRect(250, 240, 80, 30));
        ternarySearchCheck = new QCheckBox(centralwidget);
        ternarySearchCheck->setObjectName("ternarySearchCheck");
        ternarySearchCheck->setGeometry(QRect(350, 240, 80, 30));
        jumpSearchCheck = new QCheckBox(centralwidget);
        jumpSearchCheck->setObjectName("jumpSearchCheck");
        jumpSearchCheck->setGeometry(QRect(450, 240, 80, 30));
        search = new QPushButton(centralwidget);
        search->setObjectName("search");
        search->setGeometry(QRect(250, 320, 125, 30));
        exponentialSearchCheck = new QCheckBox(centralwidget);
        exponentialSearchCheck->setObjectName("exponentialSearchCheck");
        exponentialSearchCheck->setGeometry(QRect(150, 280, 80, 30));
        interpolationSearchCheck = new QCheckBox(centralwidget);
        interpolationSearchCheck->setObjectName("interpolationSearchCheck");
        interpolationSearchCheck->setGeometry(QRect(250, 280, 80, 30));
        hashingSearchCheck = new QCheckBox(centralwidget);
        hashingSearchCheck->setObjectName("hashingSearchCheck");
        hashingSearchCheck->setGeometry(QRect(350, 280, 80, 30));
        scrollForLog = new QScrollArea(centralwidget);
        scrollForLog->setObjectName("scrollForLog");
        scrollForLog->setGeometry(QRect(10, 380, 600, 180));
        scrollForLog->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 598, 178));
        resultLog = new QTextEdit(scrollAreaWidgetContents_4);
        resultLog->setObjectName("resultLog");
        resultLog->setGeometry(QRect(0, 0, 600, 180));
        scrollForLog->setWidget(scrollAreaWidgetContents_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 620, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input an array", nullptr));
        inputByFileBtn->setText(QCoreApplication::translate("MainWindow", "Input by file", nullptr));
        generateInputBtn->setText(QCoreApplication::translate("MainWindow", "Generate input", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Input size", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Choose generate type", nullptr));
        generateTypeBox->setItemText(0, QCoreApplication::translate("MainWindow", "Ascending", nullptr));
        generateTypeBox->setItemText(1, QCoreApplication::translate("MainWindow", "Descending", nullptr));
        generateTypeBox->setItemText(2, QCoreApplication::translate("MainWindow", "Random", nullptr));

        inputArrayBtn->setText(QCoreApplication::translate("MainWindow", "Input this array", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Input search value", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Choose search algorithm", nullptr));
        linearSearchCheck->setText(QCoreApplication::translate("MainWindow", "Linear", nullptr));
        binarySearchCheck->setText(QCoreApplication::translate("MainWindow", "Binary", nullptr));
        ternarySearchCheck->setText(QCoreApplication::translate("MainWindow", "Ternary", nullptr));
        jumpSearchCheck->setText(QCoreApplication::translate("MainWindow", "Jump", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        exponentialSearchCheck->setText(QCoreApplication::translate("MainWindow", "Exponetial", nullptr));
        interpolationSearchCheck->setText(QCoreApplication::translate("MainWindow", "Interpolation", nullptr));
        hashingSearchCheck->setText(QCoreApplication::translate("MainWindow", "Hashing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
