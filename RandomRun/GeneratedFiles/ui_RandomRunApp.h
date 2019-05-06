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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RandomRunAppClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetL;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *group1;
    QGridLayout *gridLayout;
    QCheckBox *integerCheckBox;
    QLabel *label_2;
    QComboBox *xRandCombBox;
    QLabel *label_3;
    QComboBox *yRandCombBox;
    QGroupBox *group2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QTextEdit *maxStepTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *xtextEdit;
    QTextEdit *ytextEdit;
    QTextEdit *maxTimesTextEdit;
    QTextEdit *minStepTextEdit;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *nextButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *preButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *allGetsButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearButton;
    QWidget *widgetR;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *figureCombBox;
    QWidget *drawView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RandomRunAppClass)
    {
        if (RandomRunAppClass->objectName().isEmpty())
            RandomRunAppClass->setObjectName(QString::fromUtf8("RandomRunAppClass"));
        RandomRunAppClass->resize(719, 471);
        centralWidget = new QWidget(RandomRunAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        widgetL = new QWidget(centralWidget);
        widgetL->setObjectName(QString::fromUtf8("widgetL"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetL->sizePolicy().hasHeightForWidth());
        widgetL->setSizePolicy(sizePolicy1);
        widgetL->setMinimumSize(QSize(0, 0));
        widgetL->setMaximumSize(QSize(350, 16777215));
        verticalLayout_2 = new QVBoxLayout(widgetL);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        group1 = new QGroupBox(widgetL);
        group1->setObjectName(QString::fromUtf8("group1"));
        sizePolicy1.setHeightForWidth(group1->sizePolicy().hasHeightForWidth());
        group1->setSizePolicy(sizePolicy1);
        group1->setFlat(false);
        group1->setCheckable(false);
        gridLayout = new QGridLayout(group1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(7);
        integerCheckBox = new QCheckBox(group1);
        integerCheckBox->setObjectName(QString::fromUtf8("integerCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(integerCheckBox->sizePolicy().hasHeightForWidth());
        integerCheckBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(integerCheckBox, 0, 1, 1, 1);

        label_2 = new QLabel(group1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        xRandCombBox = new QComboBox(group1);
        xRandCombBox->setObjectName(QString::fromUtf8("xRandCombBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(8);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(xRandCombBox->sizePolicy().hasHeightForWidth());
        xRandCombBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(xRandCombBox, 1, 1, 1, 1);

        label_3 = new QLabel(group1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        yRandCombBox = new QComboBox(group1);
        yRandCombBox->setObjectName(QString::fromUtf8("yRandCombBox"));
        sizePolicy4.setHeightForWidth(yRandCombBox->sizePolicy().hasHeightForWidth());
        yRandCombBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(yRandCombBox, 2, 1, 1, 1);


        verticalLayout_2->addWidget(group1);

        group2 = new QGroupBox(widgetL);
        group2->setObjectName(QString::fromUtf8("group2"));
        sizePolicy1.setHeightForWidth(group2->sizePolicy().hasHeightForWidth());
        group2->setSizePolicy(sizePolicy1);
        group2->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(group2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(14);
        gridLayout_2->setVerticalSpacing(7);
        label_4 = new QLabel(group2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        maxStepTextEdit = new QTextEdit(group2);
        maxStepTextEdit->setObjectName(QString::fromUtf8("maxStepTextEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(8);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(maxStepTextEdit->sizePolicy().hasHeightForWidth());
        maxStepTextEdit->setSizePolicy(sizePolicy5);
        maxStepTextEdit->setMinimumSize(QSize(0, 10));
        maxStepTextEdit->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Arabic"));
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        maxStepTextEdit->setFont(font);
        maxStepTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        maxStepTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        maxStepTextEdit->setTabChangesFocus(true);
        maxStepTextEdit->setAcceptRichText(false);

        gridLayout_2->addWidget(maxStepTextEdit, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        xtextEdit = new QTextEdit(group2);
        xtextEdit->setObjectName(QString::fromUtf8("xtextEdit"));
        sizePolicy1.setHeightForWidth(xtextEdit->sizePolicy().hasHeightForWidth());
        xtextEdit->setSizePolicy(sizePolicy1);
        xtextEdit->setMinimumSize(QSize(0, 10));
        xtextEdit->setMaximumSize(QSize(16777215, 35));
        xtextEdit->setFont(font);
        xtextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        xtextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        xtextEdit->setTabChangesFocus(true);
        xtextEdit->setAcceptRichText(false);

        horizontalLayout_2->addWidget(xtextEdit);

        ytextEdit = new QTextEdit(group2);
        ytextEdit->setObjectName(QString::fromUtf8("ytextEdit"));
        sizePolicy1.setHeightForWidth(ytextEdit->sizePolicy().hasHeightForWidth());
        ytextEdit->setSizePolicy(sizePolicy1);
        ytextEdit->setMinimumSize(QSize(0, 10));
        ytextEdit->setMaximumSize(QSize(16777215, 35));
        ytextEdit->setFont(font);
        ytextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ytextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ytextEdit->setTabChangesFocus(true);
        ytextEdit->setAcceptRichText(false);

        horizontalLayout_2->addWidget(ytextEdit);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        maxTimesTextEdit = new QTextEdit(group2);
        maxTimesTextEdit->setObjectName(QString::fromUtf8("maxTimesTextEdit"));
        sizePolicy5.setHeightForWidth(maxTimesTextEdit->sizePolicy().hasHeightForWidth());
        maxTimesTextEdit->setSizePolicy(sizePolicy5);
        maxTimesTextEdit->setMinimumSize(QSize(0, 10));
        maxTimesTextEdit->setMaximumSize(QSize(16777215, 35));
        maxTimesTextEdit->setFont(font);
        maxTimesTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        maxTimesTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        maxTimesTextEdit->setTabChangesFocus(true);
        maxTimesTextEdit->setAcceptRichText(false);

        gridLayout_2->addWidget(maxTimesTextEdit, 1, 1, 1, 1);

        minStepTextEdit = new QTextEdit(group2);
        minStepTextEdit->setObjectName(QString::fromUtf8("minStepTextEdit"));
        sizePolicy5.setHeightForWidth(minStepTextEdit->sizePolicy().hasHeightForWidth());
        minStepTextEdit->setSizePolicy(sizePolicy5);
        minStepTextEdit->setMinimumSize(QSize(0, 10));
        minStepTextEdit->setMaximumSize(QSize(16777215, 35));
        minStepTextEdit->setFont(font);
        minStepTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minStepTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minStepTextEdit->setTabChangesFocus(true);
        minStepTextEdit->setAcceptRichText(false);

        gridLayout_2->addWidget(minStepTextEdit, 3, 1, 1, 1);

        label_5 = new QLabel(group2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label = new QLabel(group2);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(group2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);


        verticalLayout_2->addWidget(group2);

        groupBox = new QGroupBox(widgetL);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        nextButton = new QPushButton(groupBox);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(10);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy6);
        nextButton->setMinimumSize(QSize(100, 0));
        nextButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(nextButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        preButton = new QPushButton(groupBox);
        preButton->setObjectName(QString::fromUtf8("preButton"));
        sizePolicy6.setHeightForWidth(preButton->sizePolicy().hasHeightForWidth());
        preButton->setSizePolicy(sizePolicy6);
        preButton->setMinimumSize(QSize(100, 0));
        preButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(preButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        allGetsButton = new QPushButton(groupBox);
        allGetsButton->setObjectName(QString::fromUtf8("allGetsButton"));
        sizePolicy6.setHeightForWidth(allGetsButton->sizePolicy().hasHeightForWidth());
        allGetsButton->setSizePolicy(sizePolicy6);
        allGetsButton->setMinimumSize(QSize(100, 0));
        allGetsButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(allGetsButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy6.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy6);
        clearButton->setMinimumSize(QSize(100, 0));
        clearButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 4);
        verticalLayout_2->setStretch(2, 2);

        horizontalLayout->addWidget(widgetL);

        widgetR = new QWidget(centralWidget);
        widgetR->setObjectName(QString::fromUtf8("widgetR"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widgetR->sizePolicy().hasHeightForWidth());
        widgetR->setSizePolicy(sizePolicy7);
        verticalLayout = new QVBoxLayout(widgetR);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(widgetR);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(20, 0));
        label_7->setMaximumSize(QSize(50, 30));

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        figureCombBox = new QComboBox(widgetR);
        figureCombBox->setObjectName(QString::fromUtf8("figureCombBox"));
        sizePolicy1.setHeightForWidth(figureCombBox->sizePolicy().hasHeightForWidth());
        figureCombBox->setSizePolicy(sizePolicy1);
        figureCombBox->setMinimumSize(QSize(20, 0));
        figureCombBox->setMaximumSize(QSize(300, 30));

        horizontalLayout_5->addWidget(figureCombBox);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(2, 5);

        verticalLayout->addLayout(horizontalLayout_5);

        drawView = new QWidget(widgetR);
        drawView->setObjectName(QString::fromUtf8("drawView"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(drawView->sizePolicy().hasHeightForWidth());
        drawView->setSizePolicy(sizePolicy8);

        verticalLayout->addWidget(drawView);


        horizontalLayout->addWidget(widgetR);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        RandomRunAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RandomRunAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 719, 26));
        RandomRunAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RandomRunAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        RandomRunAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RandomRunAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        RandomRunAppClass->setStatusBar(statusBar);

        retranslateUi(RandomRunAppClass);

        QMetaObject::connectSlotsByName(RandomRunAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *RandomRunAppClass)
    {
        RandomRunAppClass->setWindowTitle(QApplication::translate("RandomRunAppClass", "RandomRunApp", nullptr));
        group1->setTitle(QApplication::translate("RandomRunAppClass", "\351\232\217\346\234\272\346\225\260\347\224\237\346\210\220\346\226\271\345\274\217", nullptr));
        integerCheckBox->setText(QApplication::translate("RandomRunAppClass", "\346\225\264\346\225\260\346\250\241\345\274\217", nullptr));
        label_2->setText(QApplication::translate("RandomRunAppClass", "x\351\232\217\346\234\272\345\231\250", nullptr));
        label_3->setText(QApplication::translate("RandomRunAppClass", "y\351\232\217\346\234\272\345\231\250", nullptr));
        group2->setTitle(QApplication::translate("RandomRunAppClass", "\347\212\266\346\200\201", nullptr));
        label_4->setText(QApplication::translate("RandomRunAppClass", "\346\234\200\345\244\247\346\254\241\346\225\260", nullptr));
        label_5->setText(QApplication::translate("RandomRunAppClass", "\346\234\200\345\244\247\346\255\245\351\225\277", nullptr));
        label->setText(QApplication::translate("RandomRunAppClass", "\345\210\235\345\247\213\344\275\215\347\275\256", nullptr));
        label_6->setText(QApplication::translate("RandomRunAppClass", "\346\234\200\345\260\217\346\255\245\351\225\277", nullptr));
        groupBox->setTitle(QApplication::translate("RandomRunAppClass", "\346\223\215\344\275\234", nullptr));
        nextButton->setText(QApplication::translate("RandomRunAppClass", "\344\270\213\344\270\200\344\270\252", nullptr));
        preButton->setText(QApplication::translate("RandomRunAppClass", "\344\270\212\344\270\200\344\270\252", nullptr));
        allGetsButton->setText(QApplication::translate("RandomRunAppClass", "\345\205\250\351\203\250\347\224\237\346\210\220", nullptr));
        clearButton->setText(QApplication::translate("RandomRunAppClass", "\345\205\250\351\203\250\346\270\205\351\231\244", nullptr));
        label_7->setText(QApplication::translate("RandomRunAppClass", "\345\233\276\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RandomRunAppClass: public Ui_RandomRunAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMRUNAPP_H
