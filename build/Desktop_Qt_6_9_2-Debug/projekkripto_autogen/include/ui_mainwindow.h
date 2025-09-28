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
    QPushButton *pushButtonViginere;
    QLabel *labelChoice;
    QWidget *page_2;
    QLineEdit *lineEditInput;
    QLineEdit *lineEditShift;
    QPushButton *pushButtonEncrypt;
    QPushButton *pushButtonBack;
    QLineEdit *lineOutputCaesar;
    QWidget *page_3;
    QPushButton *pushButtonBackViginere;
    QLineEdit *lineEditInputViginere;
    QLineEdit *lineEditInputViginere2;
    QPushButton *pushButtonEncryptViginere;
    QPushButton *pushButtonDecryptViginere;
    QLineEdit *lineOutputViginere;
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
        stackedWidget->setGeometry(QRect(50, 30, 800, 550));
        page = new QWidget();
        page->setObjectName("page");
        pushButtonCaesar = new QPushButton(page);
        pushButtonCaesar->setObjectName("pushButtonCaesar");
        pushButtonCaesar->setGeometry(QRect(190, 130, 200, 40));
        pushButtonViginere = new QPushButton(page);
        pushButtonViginere->setObjectName("pushButtonViginere");
        pushButtonViginere->setGeometry(QRect(420, 130, 200, 40));
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
        pushButtonBack = new QPushButton(page_2);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(250, 360, 300, 40));
        lineOutputCaesar = new QLineEdit(page_2);
        lineOutputCaesar->setObjectName("lineOutputCaesar");
        lineOutputCaesar->setGeometry(QRect(250, 270, 300, 30));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pushButtonBackViginere = new QPushButton(page_3);
        pushButtonBackViginere->setObjectName("pushButtonBackViginere");
        pushButtonBackViginere->setGeometry(QRect(320, 410, 200, 40));
        lineEditInputViginere = new QLineEdit(page_3);
        lineEditInputViginere->setObjectName("lineEditInputViginere");
        lineEditInputViginere->setGeometry(QRect(270, 160, 300, 30));
        lineEditInputViginere2 = new QLineEdit(page_3);
        lineEditInputViginere2->setObjectName("lineEditInputViginere2");
        lineEditInputViginere2->setGeometry(QRect(270, 220, 300, 30));
        pushButtonEncryptViginere = new QPushButton(page_3);
        pushButtonEncryptViginere->setObjectName("pushButtonEncryptViginere");
        pushButtonEncryptViginere->setGeometry(QRect(310, 280, 94, 26));
        pushButtonDecryptViginere = new QPushButton(page_3);
        pushButtonDecryptViginere->setObjectName("pushButtonDecryptViginere");
        pushButtonDecryptViginere->setGeometry(QRect(440, 280, 94, 26));
        lineOutputViginere = new QLineEdit(page_3);
        lineOutputViginere->setObjectName("lineOutputViginere");
        lineOutputViginere->setGeometry(QRect(340, 320, 171, 71));
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
        pushButtonViginere->setText(QCoreApplication::translate("MainWindow", "Viginere", nullptr));
        labelChoice->setText(QCoreApplication::translate("MainWindow", "Pilih Metode Cipher", nullptr));
        lineEditInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        lineEditShift->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan shift (angka)", nullptr));
        pushButtonEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        lineOutputCaesar->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        pushButtonBackViginere->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        lineEditInputViginere->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan teks", nullptr));
        lineEditInputViginere2->setText(QString());
        lineEditInputViginere2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Masukkan Enkripsi", nullptr));
        pushButtonEncryptViginere->setText(QCoreApplication::translate("MainWindow", "Encrypt ", nullptr));
        pushButtonDecryptViginere->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        lineOutputViginere->setPlaceholderText(QCoreApplication::translate("MainWindow", "  Hasil Akan Tampil Disini", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
