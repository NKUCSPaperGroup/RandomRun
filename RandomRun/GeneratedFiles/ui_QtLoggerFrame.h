/********************************************************************************
** Form generated from reading UI file 'QtLoggerFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLOGGERFRAME_H
#define UI_QTLOGGERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtLoggerFrame
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textLogger;

    void setupUi(QWidget *QtLoggerFrame)
    {
        if (QtLoggerFrame->objectName().isEmpty())
            QtLoggerFrame->setObjectName(QString::fromUtf8("QtLoggerFrame"));
        QtLoggerFrame->resize(500, 600);
        gridLayout = new QGridLayout(QtLoggerFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLogger = new QTextEdit(QtLoggerFrame);
        textLogger->setObjectName(QString::fromUtf8("textLogger"));
        textLogger->setReadOnly(true);

        gridLayout->addWidget(textLogger, 0, 0, 1, 1);


        retranslateUi(QtLoggerFrame);

        QMetaObject::connectSlotsByName(QtLoggerFrame);
    } // setupUi

    void retranslateUi(QWidget *QtLoggerFrame)
    {
        QtLoggerFrame->setWindowTitle(QApplication::translate("QtLoggerFrame", "QtLoggerFrame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtLoggerFrame: public Ui_QtLoggerFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLOGGERFRAME_H
