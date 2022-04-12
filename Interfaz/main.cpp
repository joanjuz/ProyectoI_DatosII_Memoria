#include "main.h"
#include "./ui_main.h"
#include <iostream>
#include <QDebug>
#include<qapplication.h>
#include<qpushbutton.h>

Main::Main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main)
{
    ui->setupUi(this);
}
Main::~Main()
{
    delete ui;
}


void Main::on_pushButton_clicked()
{
    std::cout << "Hola" << "\n";
}
