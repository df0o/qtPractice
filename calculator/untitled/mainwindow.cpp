#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

double firstNum;
bool userSecNum = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui ->button_0, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_1, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_2, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_3, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_4, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_5, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_6, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_7, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_8, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui ->button_9, SIGNAL(released()), this, SLOT(digit_pressed()));

    connect(ui ->button_posneg, SIGNAL(released()), this, SLOT(unary_op_pressed()));
    connect(ui ->button_per, SIGNAL(released()), this, SLOT(unary_op_pressed()));

    connect(ui ->button_plus, SIGNAL(released()), this, SLOT(binary_op_pressed()));
    connect(ui ->button_minus, SIGNAL(released()), this, SLOT(binary_op_pressed()));
    connect(ui ->button_times, SIGNAL(released()), this, SLOT(binary_op_pressed()));
    connect(ui ->button_div, SIGNAL(released()), this, SLOT(binary_op_pressed()));

    ui->button_plus->setCheckable(true);
    ui->button_minus->setCheckable(true);
    ui->button_times->setCheckable(true);
    ui->button_div->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
//    qDebug() << "test";
    QPushButton * button = (QPushButton*)sender();
    double labelNum;
    QString labelVal;

    if((ui->button_plus->isChecked() || ui->button_minus->isChecked()
            || ui->button_times->isChecked() || ui->button_div->isChecked()) && (!userSecNum))
    {
        labelNum = button->text().toDouble();
        userSecNum = true;
        labelVal = QString::number(labelNum,'g',15);
    }
    else
    {
        if (ui->label->text().contains('.') && button->text() == "0")
        {
            labelVal = ui->label->text() + button->text();
        }
        else
        {
            labelNum = (ui->label->text() + button->text()).toDouble();
            labelVal = QString::number(labelNum,'g',15);
        }
    }

    ui->label->setText(labelVal);
}

void MainWindow::on_button_dot_released()
{
    ui->label->setText(ui->label->text() + ".");
}

void MainWindow::unary_op_pressed()
{
    QPushButton * button = (QPushButton*) sender();
    double labelNum;
    QString labelVal;

    if (button->text() == "+/-")
    {
        labelNum = ui->label->text().toDouble();
        labelNum = labelNum * -1;
        labelVal = QString::number(labelNum,'g',15);

        ui->label->setText(labelVal);
    } else if (button->text() == "%")
    {
        labelNum = ui->label->text().toDouble();
        labelNum = labelNum * 0.01;
        labelVal = QString::number(labelNum,'g',15);

        ui->label->setText(labelVal);
    }
}

void MainWindow::on_button_clear_released()
{
    ui->button_plus->setChecked(false);
    ui->button_minus->setChecked(false);
    ui->button_times->setChecked(false);
    ui->button_div->setChecked(false);

    userSecNum = false;

    ui->label->setText("0");
}

void MainWindow::on_button_eq_released()
{
    double labelNum, secNum;
    secNum = ui->label->text().toDouble();
    QString newLabel;

    if(ui->button_plus->isChecked())
    {
        labelNum = firstNum + secNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->button_plus->setChecked(false);
    }
    else if(ui->button_minus->isChecked())
    {
        labelNum = firstNum - secNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->button_minus->setChecked(false);
    }
    else if(ui->button_times->isChecked())
    {
        labelNum = firstNum * secNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->button_times->setChecked(false);
    }
    else if(ui->button_div->isChecked())
    {
        labelNum = firstNum / secNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->button_div->setChecked(false);
    }

    userSecNum = false;
}


void MainWindow::binary_op_pressed()
{
    QPushButton * button = (QPushButton*) sender();
    firstNum = ui->label->text().toDouble();

    button->setChecked(true);


}
