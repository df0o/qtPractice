/********************************************************************************
** Form generated from reading UI file 'inputlabel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTLABEL_H
#define UI_INPUTLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InputLabel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InputLabel)
    {
        if (InputLabel->objectName().isEmpty())
            InputLabel->setObjectName(QStringLiteral("InputLabel"));
        InputLabel->resize(373, 99);
        verticalLayout = new QVBoxLayout(InputLabel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(InputLabel);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(InputLabel);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(InputLabel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InputLabel);
        QObject::connect(buttonBox, SIGNAL(accepted()), InputLabel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InputLabel, SLOT(reject()));

        QMetaObject::connectSlotsByName(InputLabel);
    } // setupUi

    void retranslateUi(QDialog *InputLabel)
    {
        InputLabel->setWindowTitle(QApplication::translate("InputLabel", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("InputLabel", "Please enter label below:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InputLabel: public Ui_InputLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTLABEL_H
