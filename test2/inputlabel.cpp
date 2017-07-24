#include "inputlabel.h"
#include "ui_inputlabel.h"

InputLabel::InputLabel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputLabel)
{
    ui->setupUi(this);
}

InputLabel::~InputLabel()
{
    delete ui;
}
