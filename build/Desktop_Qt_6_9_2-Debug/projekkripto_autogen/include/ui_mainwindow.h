/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButtonCaesar;
    QPushButton *pushButtonRailway;
    QLabel *labelChoice;
    QWidget *page_2;
    QLineEdit *lineEditInput;
    QLineEdit *lineEditShift;
    QPushButton *pushButtonEncrypt;
    QLabel *labelOutput;
    QPushButton *pushButtonBack;
    QWidget *page_3;
    QLabel *labelRailway;
    QPushButton *pushButtonBackRailway;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 550));
        page = new QWidget();
        page->setObjectName("page");
        pushButtonCaesar = new QPushButton(page);
        pushButtonCaesar->setObjectName("pushButtonCaesar");
        pushButtonCaesar->setGeometry(QRect(300, 150, 200, 40));
        pushButtonRailway = new QPushButton(page);
        pushButtonRailway->setObjectName("pushButtonRailway");
        pushButtonRailway->setGeometry(QRect(300, 250, 200, 40));
        labelChoice = new QLabel(page);
        labelChoice->setObjectName("labelChoice");
        labelChoice->setGeometry(QRect(280, 50, 250, 40));
        labelChoice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        lineEditInput = new QLineEdit(page_2);
        lineEditInput->setObjectName("lineEditInput");
        lineEditInput->setGeometry(QRect(250, 100, 300, 30));
        lineEditShift = new QLineEdit(page_2);
        lineEditShift->setObjectName("lineEditShift");
        lineEditShift->setGeometry(QRect(250, 150, 300, 30));
        pushButtonEncrypt = new QPushButton(page_2);
        pushButtonEncrypt->setObjectName("pushButtonEncrypt");
        pushButtonEncrypt->setGeometry(QRect(250, 200, 300, 40));
        labelOutput = new QLabel(page_2);
        labelOutput->setObjectName("labelOutput");
        labelOutput->setGeometry(QRect(250, 260, 300, 40));
        labelOutput->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButtonBack = new QPushButton(page_2);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(250, 320, 300, 40));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        labelRailway = new QLabel(page_3);
        labelRailway->setObjectName("labelRailway");
        labelRailway->setGeometry(QRect(200, 200, 400, 40));
        labelRailway->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButtonBackRailway = new QPushButton(page_3);
        pushButtonBackRailway->setObjectName("pushButtonBackRailway");
        pushButtonBackRailway->setGeometry(QRect(300, 300, 200, 40));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Multi Cipher GUI", nullptr));
        pushButtonCaesar->setText(QCoreApplication::translate("MainWindow", "Caesar Cipher", nullptr));
        pushButtonRailway->setText(QCoreApplication::translate("MainWindow", "Railway Cipher", nullptr));
        labelChoice->setText(QCoreApplication::translate("MainWindow", "Pilih Metode Cipher", nullptr));
        lineEditInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        lineEditShift->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan shift (angka)", nullptr));
        pushButtonEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        labelOutput->setText(QCoreApplication::translate("MainWindow", "Hasil akan tampil di sini", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        labelRailway->setText(QCoreApplication::translate("MainWindow", "Railway Cipher (Coming Soon)", nullptr));
        pushButtonBackRailway->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
