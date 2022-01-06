#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_pushButton_clicked()
{
    QString texto=ui->lineEdit->text(),apresenta;
    int8_t fatorial=texto.toInt();
    if (fatorial<1){
        fatorial=1;
    }
    if (fatorial>20){
        double resultado = fatorial;
        for (int8_t contador=1;contador<fatorial;contador++) {
            resultado=resultado*(fatorial-contador);
        }
        apresenta = QString::number(resultado);
    }
    else {
        unsigned long resultado = fatorial;
        for (int8_t contador=1;contador<fatorial;contador++) {
            resultado=resultado*(fatorial-contador);
            apresenta = QString::number(resultado);
        }
    }
    QMessageBox::information(this,"Resultado", ""+apresenta);
}
