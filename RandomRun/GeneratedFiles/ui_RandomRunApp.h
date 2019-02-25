/********************************************************************************
** Form generated from reading UI file 'RandomRunApp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMRUNAPP_H
#define UI_RANDOMRUNAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RandomRunAppClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RandomRunAppClass)
    {
        if (RandomRunAppClass->objectName().isEmpty())
            RandomRunAppClass->setObjectName(QString::fromUtf8("RandomRunAppClass"));
        RandomRunAppClass->resize(600, 400);
        menuBar = new QMenuBar(RandomRunAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        RandomRunAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RandomRunAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        RandomRunAppClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(RandomRunAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        RandomRunAppClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RandomRunAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        RandomRunAppClass->setStatusBar(statusBar);

        retranslateUi(RandomRunAppClass);

        QMetaObject::connectSlotsByName(RandomRunAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *RandomRunAppClass)
    {
        RandomRunAppClass->setWindowTitle(QApplication::translate("RandomRunAppClass", "RandomRunApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RandomRunAppClass: public Ui_RandomRunAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMRUNAPP_H
