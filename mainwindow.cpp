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

// pindah ke page Caesar
void MainWindow::on_pushButtonCaesar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

// pindah ke page Viginere
void MainWindow::on_pushButtonViginere_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


// Tombol Back dari Caesar
void MainWindow::on_pushButtonBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Tombol Back dari Railway
void MainWindow::on_pushButtonBackRailway_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
// Tombol Back Dari Viginere
void MainWindow::on_pushButtonBackViginere_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}




// Tombol Encrypt Caesar
void MainWindow::on_pushButtonEncrypt_clicked()
{
    QString text = ui->lineEditInput->text();
    int shiftValue = ui->lineEditShift->text().toInt() ;

    shiftASCII(text, shiftValue);
    ui->lineOutputCaesar->setText(text);
}

//Tombol Encrypt Viginere
void MainWindow::on_pushButtonEncryptViginere_clicked()
{
    QString text = ui->lineEditInputViginere->text();
    QString kataKunci = ui->lineEditInputViginere2->text() ;

    viginere(text, kataKunci);
    ui->lineOutputViginere->setText(text);
}
//Tombol Dencrypt Viginere

void MainWindow::on_pushButtonDecryptViginere_clicked()
{
    QString text = ui->lineEditInputViginere->text();
    QString kataKunci = ui->lineEditInputViginere2->text() ;

    viginere(text, kataKunci);
    ui->lineOutputViginere->setText(text);
}


void MainWindow::viginere(QString &plain, QString kataKunci)
{
    int j = 0;

    for (int i = 0; i < plain.length(); i++) {
        char c = plain[i].toLatin1();
        char kataKunciShift = kataKunci[j].toLatin1();

        int shift = 0;
        if (kataKunciShift >= 'a' && kataKunciShift <= 'z')
            shift = kataKunciShift - 'a';
        else if (kataKunciShift >= 'A' && kataKunciShift <= 'Z')
            shift = kataKunciShift - 'A';

        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + shift) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + shift) % 26) + 'A';
        }

        plain[i] = c;

        j++;
        if (j >= kataKunci.length()) j = 0;
    }
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
