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
    ui->stackedWidget->setCurrentIndex(2);
}

// pindah ke page Viginere
void MainWindow::on_pushButtonViginere_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

// pindah ke page Xor
void MainWindow::on_pushButtonXor_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

// Tombol Back dari Caesar
void MainWindow::on_pushButtonBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Tombol Back Dari Viginere
void MainWindow::on_pushButtonBackViginere_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Tombol Back Dari Xor
void MainWindow::on_pushButtonBackXor_clicked()
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
    QString kataKunci = ui->lineEditInputViginere2->text();

    decryptviginere(text, kataKunci);
    ui->lineOutputViginere->setText(text);
}

// Tombol Encrypt XOR
void MainWindow::on_pushButtonXorEncrypt_clicked()
{
    QString text = ui->lineEditInputXor->text();
    QString key = ui->lineEditInputXor2->text();

    XorEncrypt(text, key);
    ui->lineOutputXor->setText(text);
}

// Tombol Decrypt XOR
void MainWindow::on_pushButtonXorDecrypt_clicked()
{
    QString text = ui->lineEditInputXor->text();
    QString key = ui->lineEditInputXor2->text();

    XorDecrypt(text, key);
    ui->lineOutputXor->setText(text);
}

QString toHexString(const QByteArray &data) {
    return QString(data.toHex());
}

QByteArray fromHexString(const QString &hex) {
    return QByteArray::fromHex(hex.toUtf8());
}

void MainWindow::decryptviginere(QString &plain, QString kataKunci)
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
            c = ( (c - 'a' - shift + 26) % 26 ) + 'a';  // +26 untuk menghindari negatif
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ( (c - 'A' - shift + 26) % 26 ) + 'A';
        }

        plain[i] = c;

        j++;
        if (j >= kataKunci.length()) j = 0;
    }
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

// XOR Encrypt (plaintext → hex)
void MainWindow::XorEncrypt(QString &plain, QString key)
{
    if (key.isEmpty()) return;

    QByteArray input  = plain.toUtf8();
    QByteArray k      = key.toUtf8();
    QByteArray result;
    result.resize(input.size());

    for (int i = 0; i < input.size(); i++) {
        result[i] = input[i] ^ k[i % k.size()];
    }

    // ubah hasil ke hex agar tampil rapi
    QString hexResult = toHexString(result);
    ui->lineOutputXor->setText(hexResult);

    plain = hexResult;
}

// XOR Decrypt (hex → plaintext)
void MainWindow::XorDecrypt(QString &cipherHex, QString key)
{
    if (key.isEmpty()) return;

    QByteArray input  = fromHexString(cipherHex);
    QByteArray k      = key.toUtf8();
    QByteArray result;
    result.resize(input.size());

    for (int i = 0; i < input.size(); i++) {
        result[i] = input[i] ^ k[i % k.size()];
    }

    QString plainText = QString::fromUtf8(result);
    ui->lineOutputXor->setText(plainText);

    cipherHex = plainText;
}

