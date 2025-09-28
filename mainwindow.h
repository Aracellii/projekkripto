#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonCaesar_clicked();
    void on_pushButtonViginere_clicked();
    void on_pushButtonEncrypt_clicked();
    void on_pushButtonEncryptViginere_clicked();
    void on_pushButtonDecryptViginere_clicked();

    void on_pushButtonBack_clicked();
    void on_pushButtonBackRailway_clicked();
    void on_pushButtonBackViginere_clicked();

private:
    Ui::MainWindow *ui;

    void viginere(QString &text, QString kataKunci);
    void shiftASCII(QString &text, int shiftValue);
};

#endif // MAINWINDOW_H
