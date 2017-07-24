#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QDebug>
#include <QFileDialog>
#include <QFrame>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QIcon>
#include <QImage>
#include <QInputDialog>
#include <QLabel>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPixmap>
#include <QPoint>
#include <QPropertyAnimation>
#include <QRubberBand>
#include <QScreen>
#include <QString>
#include <QTextEdit>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class QDragEnterEvent;
class QDropEvent;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString imagePath;

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
//    virtual void enterEvent(QMouseEvent *e);
//    virtual void leaveEvent(QMouseEvent *e);


private slots:
    void on_button_open_released();

    void on_button_save_released();

    void on_button_label_released();

    void on_button_crop_released();


//    void on_button_label_toggled(bool checked);

//    void on_button_label_clicked(bool checked);

//    void on_pushButton_released();

private:
    Ui::MainWindow *ui;
    MainWindow *nWin;
    QPixmap image;
    QImage *imageObject;
//    QGraphicsScene *scene;
    QRubberBand *rubberBand;
    QPoint origin;
    QPoint posMouse;
    QMessageBox messageBox;
};

#endif // MAINWINDOW_H
