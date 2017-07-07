#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();
    void on_button_dot_released();
    void unary_op_pressed();
    void on_button_clear_released();
    void on_button_eq_released();
    void binary_op_pressed();
};

#endif // MAINWINDOW_H
