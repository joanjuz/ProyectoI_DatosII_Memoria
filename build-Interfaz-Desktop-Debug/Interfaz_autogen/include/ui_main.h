/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main
{
public:
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main)
    {
        if (Main->objectName().isEmpty())
            Main->setObjectName(QString::fromUtf8("Main"));
        Main->resize(1920, 1080);
        centralwidget = new QWidget(Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Main->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Main->setStatusBar(statusbar);

        retranslateUi(Main);

        QMetaObject::connectSlotsByName(Main);
    } // setupUi

    void retranslateUi(QMainWindow *Main)
    {
        Main->setWindowTitle(QApplication::translate("Main", "Main", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main: public Ui_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
