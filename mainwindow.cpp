#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Tombol Caesar → pindah ke page Caesar
void MainWindow::on_pushButtonCaesar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

// Tombol Railway → pindah ke page Railway
void MainWindow::on_pushButtonRailway_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// Tombol Back dari Caesar → kembali ke pilihan
void MainWindow::on_pushButtonBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Tombol Back dari Railway → kembali ke pilihan
void MainWindow::on_pushButtonBackRailway_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Tombol Encrypt Caesar
void MainWindow::on_pushButtonEncrypt_clicked()
{
    QString text = ui->lineEditInput->text();
    int shiftValue = ui->lineEditShift->text().toInt();

    shiftASCII(text, shiftValue);
    ui->labelOutput->setText(text);
}

// Fungsi Caesar Cipher
void MainWindow::shiftASCII(QString &plain, int shiftValue)
{
    for (int i = 0; i < plain.length(); i++) {
        char c = plain[i].toLatin1(); // ambil char ASCII

        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + (shiftValue % 26) + 26) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + (shiftValue % 26) + 26) % 26) + 'A';
        }
        else {
            c = c + shiftValue; // karakter non-alfabet ikut digeser
        }

        plain[i] = c; // assign kembali ke QString
    }
}
