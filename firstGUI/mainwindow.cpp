#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("button clicked");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "title", "message");
}

void MainWindow::on_pushButton_3_clicked()
{
//    Dialog newDig;
//    newDig.setModal(true);
//    newDig.exec();

}
