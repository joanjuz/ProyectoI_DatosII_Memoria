#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>


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
    std::cout << "Hola" << "\n";
}

void MainWindow::on_pushButton_2_clicked()
{
    this->setStyleSheet("QWidget{background-image:url(:/Images/P1 (0).jpg);}");
}

