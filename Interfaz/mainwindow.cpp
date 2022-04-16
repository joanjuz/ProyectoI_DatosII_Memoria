#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include "client.h"

Client user;
int flag =0;
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
    flag += 1;
    if (flag < 3){
    std::string image = user.abrir_socket("Button1");
    char* dir;
    dir = &image[0];
    ui->pushButton->setIcon(QIcon(dir));
    }
}

void MainWindow::on_Button2_clicked()
{
    flag += 1;
    if (flag < 3){
    std::string image = user.abrir_socket("Button2");
    char* dir;
    dir = &image[0];
    ui->Button2->setIcon(QIcon(dir));
    }
}

