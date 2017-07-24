#ifndef INPUTLABEL_H
#define INPUTLABEL_H

#include <QDialog>

namespace Ui {
class InputLabel;
}

class InputLabel : public QDialog
{
    Q_OBJECT

public:
    explicit InputLabel(QWidget *parent = 0);
    ~InputLabel();

private:
    Ui::InputLabel *ui;
};

#endif // INPUTLABEL_H
