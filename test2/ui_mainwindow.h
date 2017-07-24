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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *imageLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QPushButton *button_open;
    QLabel *label_2;
    QPushButton *button_save;
    QSpacerItem *verticalSpacer_3;
    QFrame *line;
    QLabel *label_3;
    QPushButton *button_label;
    QLabel *label_4;
    QPushButton *button_crop;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1500, 1036);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral("background-color: white;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy1);
        imageLabel->setMinimumSize(QSize(1000, 1000));
        imageLabel->setStyleSheet(QStringLiteral("background: white;"));

        gridLayout_2->addWidget(imageLabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 17px;\n"
"}\n"
""));
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label);

        button_open = new QPushButton(centralWidget);
        button_open->setObjectName(QStringLiteral("button_open"));
        button_open->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_open->sizePolicy().hasHeightForWidth());
        button_open->setSizePolicy(sizePolicy2);
        button_open->setMinimumSize(QSize(100, 100));
        button_open->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: #000000;\n"
"	font-size: 24px;\n"
"	background: #ffffff;\n"
"	border-color: rgb(145, 145, 145);\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	padding: 5px 5px 5px 5px;\n"
"	text-decoration: none;\n"
"	border-radius: 25;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     border-color: rgb(8,123,209);\n"
" }"));

        verticalLayout->addWidget(button_open);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 17px;\n"
"}\n"
""));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_2);

        button_save = new QPushButton(centralWidget);
        button_save->setObjectName(QStringLiteral("button_save"));
        sizePolicy2.setHeightForWidth(button_save->sizePolicy().hasHeightForWidth());
        button_save->setSizePolicy(sizePolicy2);
        button_save->setMinimumSize(QSize(100, 100));
        button_save->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: #000000;\n"
"	font-size: 24px;\n"
"	background: #ffffff;\n"
"	border-color: rgb(145, 145, 145);\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	padding: 5px 5px 5px 5px;\n"
"	text-decoration: none;\n"
"	border-radius: 25;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     border-color: rgb(8,123,209);\n"
" }"));

        verticalLayout->addWidget(button_save);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setLineWidth(1);
        line->setMidLineWidth(5);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 17px;\n"
"}\n"
""));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_3);

        button_label = new QPushButton(centralWidget);
        button_label->setObjectName(QStringLiteral("button_label"));
        sizePolicy2.setHeightForWidth(button_label->sizePolicy().hasHeightForWidth());
        button_label->setSizePolicy(sizePolicy2);
        button_label->setMinimumSize(QSize(100, 100));
        button_label->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: #000000;\n"
"	font-size: 24px;\n"
"	background: #ffffff;\n"
"	border-color: rgb(145, 145, 145);\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	padding: 5px 5px 5px 5px;\n"
"	text-decoration: none;\n"
"	border-radius: 25;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     border-color: rgb(8,123,209);\n"
" }"));

        verticalLayout->addWidget(button_label);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 17px;\n"
"}\n"
""));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_4);

        button_crop = new QPushButton(centralWidget);
        button_crop->setObjectName(QStringLiteral("button_crop"));
        sizePolicy2.setHeightForWidth(button_crop->sizePolicy().hasHeightForWidth());
        button_crop->setSizePolicy(sizePolicy2);
        button_crop->setMinimumSize(QSize(100, 100));
        button_crop->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: #000000;\n"
"	font-size: 24px;\n"
"	background: #ffffff;\n"
"	border-color: rgb(145, 145, 145);\n"
"	border-style: solid;\n"
"	border-width: 3px;\n"
"	padding: 5px 5px 5px 5px;\n"
"	text-decoration: none;\n"
"	border-radius: 25;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     border-color: rgb(8,123,209);\n"
" }"));

        verticalLayout->addWidget(button_crop);

        verticalSpacer = new QSpacerItem(20, 260, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        imageLabel->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        button_open->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        button_save->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Label", Q_NULLPTR));
        button_label->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Crop", Q_NULLPTR));
        button_crop->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
