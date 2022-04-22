#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include "client.h"
#include <string>
using namespace std;

Client user;
int flag =4;
string name1;
string name2;
QPushButton* prevB;
QPushButton* prevC;
int pref = 0;
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
    if (flag < 3){
    std::string image = user.abrir_socket("Button1");
    char* dir;
    dir = &image[0];
    ui->pushButton->setIcon(QIcon(dir));

    }
}

void MainWindow::on_Button2_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button2");
    char* dir;
    dir = &image[0];
    ui->Button2->setIcon(QIcon(dir));
    }
}

void MainWindow::on_Button3_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button3");
    char* dir;
    dir = &image[0];
    ui->Button3->setIcon(QIcon(dir));
    }

}


void MainWindow::on_Button4_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button4");
    char* dir;
    dir = &image[0];
    ui->Button4->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button5_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button5");
    char* dir;
    dir = &image[0];
    ui->Button5->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button6_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button6");
    char* dir;
    dir = &image[0];
    ui->Button6->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button7_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button7");
    char* dir;
    dir = &image[0];
    ui->Button7->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button8_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button8");
    char* dir;
    dir = &image[0];
    ui->Button8->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button9_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button9");
    char* dir;
    dir = &image[0];
    ui->Button9->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button10_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button10");
    char* dir;
    dir = &image[0];
    ui->Button10->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button11_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button11");
    char* dir;
    dir = &image[0];
    ui->Button11->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button12_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button12");
    char* dir;
    dir = &image[0];
    ui->Button12->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button13_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button13");
    char* dir;
    dir = &image[0];
    ui->Button13->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button14_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button14");
    char* dir;
    dir = &image[0];
    ui->Button14->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button15_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button15");
    char* dir;
    dir = &image[0];
    ui->Button15->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button16_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button16");
    char* dir;
    dir = &image[0];
    ui->Button16->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button17_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button17");
    char* dir;
    dir = &image[0];
    ui->Button17->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button18_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button18");
    char* dir;
    dir = &image[0];
    ui->Button18->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button19_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button19");
    char* dir;
    dir = &image[0];
    ui->Button19->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button20_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button20");
    char* dir;
    dir = &image[0];
    ui->Button20->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button21_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button21");
    char* dir;
    dir = &image[0];
    ui->Button21->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button22_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button22");
    char* dir;
    dir = &image[0];
    ui->Button22->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button23_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button23");
    char* dir;
    dir = &image[0];
    ui->Button23->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button24_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button24");
    char* dir;
    dir = &image[0];
    ui->Button24->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button25_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button25");
    char* dir;
    dir = &image[0];
    ui->Button25->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button26_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button26");
    char* dir;
    dir = &image[0];
    ui->Button26->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button27_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button27");
    char* dir;
    dir = &image[0];
    ui->Button27->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button28_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button28");
    char* dir;
    dir = &image[0];
    ui->Button28->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button29_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button29");
    char* dir;
    dir = &image[0];
    ui->Button29->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button30_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button30");
    char* dir;
    dir = &image[0];
    ui->Button30->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button31_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button31");
    char* dir;
    dir = &image[0];
    ui->Button31->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button32_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button32");
    char* dir;
    dir = &image[0];
    ui->Button32->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button33_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button33");
    char* dir;
    dir = &image[0];
    ui->Button33->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button34_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button34");
    char* dir;
    dir = &image[0];
    ui->Button34->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button35_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button35");
    char* dir;
    dir = &image[0];
    ui->Button35->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button36_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button36");
    char* dir;
    dir = &image[0];
    ui->Button36->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button37_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button37");
    char* dir;
    dir = &image[0];
    ui->Button37->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button38_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button38");
    char* dir;
    dir = &image[0];
    ui->Button38->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button39_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button39");
    char* dir;
    dir = &image[0];
    ui->Button39->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button40_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button40");
    char* dir;
    dir = &image[0];
    ui->Button40->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button41_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button41");
    char* dir;
    dir = &image[0];
    ui->Button41->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button42_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button42");
    char* dir;
    dir = &image[0];
    ui->Button42->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button43_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button43");
    char* dir;
    dir = &image[0];
    ui->Button43->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button44_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button44");
    char* dir;
    dir = &image[0];
    ui->Button44->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button45_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button45");
    char* dir;
    dir = &image[0];
    ui->Button45->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button46_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button46");
    char* dir;
    dir = &image[0];
    ui->Button46->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button47_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button47");
    char* dir;
    dir = &image[0];
    ui->Button47->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button48_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button48");
    char* dir;
    dir = &image[0];
    ui->Button48->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button49_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button49");
    char* dir;
    dir = &image[0];
    ui->Button49->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button50_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button50");
    char* dir;
    dir = &image[0];
    ui->Button50->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button51_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button51");
    char* dir;
    dir = &image[0];
    ui->Button51->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button52_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button52");
    char* dir;
    dir = &image[0];
    ui->Button52->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button53_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button53");
    char* dir;
    dir = &image[0];
    ui->Button53->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button54_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button54");
    char* dir;
    dir = &image[0];
    ui->Button54->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button55_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button55");
    char* dir;
    dir = &image[0];
    ui->Button55->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button56_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button56");
    char* dir;
    dir = &image[0];
    ui->Button56->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button57_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button57");
    char* dir;
    dir = &image[0];
    ui->Button57->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button58_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button58");
    char* dir;
    dir = &image[0];
    ui->Button58->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button59_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button59");
    char* dir;
    dir = &image[0];
    ui->Button59->setIcon(QIcon(dir));
    }

}
void MainWindow::on_Button60_clicked()
{
    if (flag < 3){
    std::string image = user.abrir_socket("Button60");
    char* dir;
    dir = &image[0];
    ui->Button60->setIcon(QIcon(dir));
    }

}



void MainWindow::on_pushButton_2_clicked()
{
    flag -= 1;
    ui->P1->setEnabled(false);
}


void MainWindow::on_pushButton_3_clicked()
{
    flag -= 1;
    ui->P2->setEnabled(false);
}

