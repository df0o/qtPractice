/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *button_clear;
    QPushButton *button_posneg;
    QPushButton *button_per;
    QPushButton *button_div;
    QPushButton *button_7;
    QPushButton *button_9;
    QPushButton *button_8;
    QPushButton *button_times;
    QPushButton *button_3;
    QPushButton *button_2;
    QPushButton *button_4;
    QPushButton *button_1;
    QPushButton *button_plus;
    QPushButton *button_6;
    QPushButton *button_5;
    QPushButton *button_minus;
    QPushButton *button_dot;
    QPushButton *button_0;
    QPushButton *button_eq;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(244, 414);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 244, 61));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border: 1px solid gray;\n"
"	font-size: 24px;\n"
"	width: 100%;\n"
"}\n"
"\n"
"background-color : white;"));
        button_clear = new QPushButton(centralWidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        button_clear->setGeometry(QRect(0, 61, 61, 61));
        button_clear->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        button_posneg = new QPushButton(centralWidget);
        button_posneg->setObjectName(QStringLiteral("button_posneg"));
        button_posneg->setGeometry(QRect(61, 61, 61, 61));
        button_posneg->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        button_per = new QPushButton(centralWidget);
        button_per->setObjectName(QStringLiteral("button_per"));
        button_per->setGeometry(QRect(122, 61, 61, 61));
        button_per->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        button_div = new QPushButton(centralWidget);
        button_div->setObjectName(QStringLiteral("button_div"));
        button_div->setGeometry(QRect(183, 61, 61, 61));
        button_div->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white; \n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        button_7 = new QPushButton(centralWidget);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setGeometry(QRect(0, 120, 61, 61));
        button_7->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_9 = new QPushButton(centralWidget);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setGeometry(QRect(122, 120, 61, 61));
        button_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_8 = new QPushButton(centralWidget);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setGeometry(QRect(61, 120, 61, 61));
        button_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_times = new QPushButton(centralWidget);
        button_times->setObjectName(QStringLiteral("button_times"));
        button_times->setGeometry(QRect(183, 120, 61, 61));
        button_times->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white; \n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        button_3 = new QPushButton(centralWidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setGeometry(QRect(122, 240, 61, 61));
        button_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_2 = new QPushButton(centralWidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setGeometry(QRect(61, 240, 61, 61));
        button_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_4 = new QPushButton(centralWidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setGeometry(QRect(0, 181, 61, 61));
        button_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_1 = new QPushButton(centralWidget);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setGeometry(QRect(0, 240, 61, 61));
        button_1->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_plus = new QPushButton(centralWidget);
        button_plus->setObjectName(QStringLiteral("button_plus"));
        button_plus->setGeometry(QRect(183, 240, 61, 61));
        button_plus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white; \n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        button_6 = new QPushButton(centralWidget);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setGeometry(QRect(122, 181, 61, 61));
        button_6->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_5 = new QPushButton(centralWidget);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setGeometry(QRect(61, 181, 61, 61));
        button_5->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_minus = new QPushButton(centralWidget);
        button_minus->setObjectName(QStringLiteral("button_minus"));
        button_minus->setGeometry(QRect(183, 181, 61, 61));
        button_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white; \n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        button_dot = new QPushButton(centralWidget);
        button_dot->setObjectName(QStringLiteral("button_dot"));
        button_dot->setGeometry(QRect(122, 300, 61, 61));
        button_dot->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        button_0 = new QPushButton(centralWidget);
        button_0->setObjectName(QStringLiteral("button_0"));
        button_0->setGeometry(QRect(0, 300, 122, 61));
        button_0->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button_eq = new QPushButton(centralWidget);
        button_eq->setObjectName(QStringLiteral("button_eq"));
        button_eq->setGeometry(QRect(183, 300, 61, 61));
        button_eq->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white; \n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed { \n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 244, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        button_clear->setText(QApplication::translate("MainWindow", "c", Q_NULLPTR));
        button_posneg->setText(QApplication::translate("MainWindow", "+/-", Q_NULLPTR));
        button_per->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        button_div->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        button_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        button_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        button_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        button_times->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        button_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        button_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        button_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        button_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        button_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        button_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        button_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        button_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        button_dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        button_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        button_eq->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
