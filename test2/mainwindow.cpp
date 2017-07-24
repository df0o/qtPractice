#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inputlabel.h"

bool clickLabel = false;
bool clickCrop = false;
QImage copyImage;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    rubberBand = false;

    QPixmap newIcon(":/image/image/new.png");
    QIcon openButton(newIcon);
    ui->button_open->setIcon(openButton);
    ui->button_open->setIconSize(newIcon.rect().size());

    QPixmap labelIcon(":/image/image/edit.png");
    QIcon labelButton(labelIcon);
    ui->button_label->setIcon(labelButton);
    ui->button_label->setIconSize(labelIcon.rect().size());

    QPixmap cropIcon(":/image/image/crop.png");
    QIcon cropButton(cropIcon);
    ui->button_crop->setIcon(cropButton);
    ui->button_crop->setIconSize(cropIcon.rect().size());

    QPixmap saveIcon(":/image/image/save.png");
    QIcon saveButton(saveIcon);
    ui->button_save->setIcon(saveButton);
    ui->button_save->setIconSize(saveIcon.rect().size());

//    qDebug() << imagePath;
//    qDebug() << copyImage.isNull();

    if (copyImage.isNull() == false) {
//        qDebug( "sup" );
        ui->imageLabel->setPixmap(QPixmap::fromImage(copyImage).scaled(ui->imageLabel->width(),
                                                                   ui->imageLabel->height(),
                                                                   Qt::KeepAspectRatio));
        ui->imageLabel->setFixedSize(copyImage.size());
        this->adjustSize();
        ui->imageLabel->repaint();
    } else {
        QPixmap bglogo(":/image/image/logo.png");
        ui->imageLabel->setPixmap(bglogo.scaled(ui->imageLabel->width(),
                                                ui->imageLabel->height(),
                                                Qt::KeepAspectRatio));
        ui->imageLabel->repaint();

    }

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_button_open_released() {
    imagePath = QFileDialog::getOpenFileName(this, tr("Open File"), "",
                                                     tr("JPEG (*.jpg *.jpeg);; PNG (*.png)"));
    QImage image(imagePath);
    ui->imageLabel->setPixmap(QPixmap::fromImage(image).scaled(ui->imageLabel->width(),
                                                               ui->imageLabel->height(),
                                                               Qt::KeepAspectRatio));
//    ui->imageLabel->setScaledContents(true);

    ui->imageLabel->repaint();

}

void MainWindow::on_button_save_released() {
    QString imagePath = QFileDialog::getSaveFileName(this, tr("Save File"), "",
                                                     tr("JPEG (*.jpg *.jpeg);; PNG (*.png)"));


    QScreen *QSCREEN = QGuiApplication::primaryScreen();
    QPixmap temp = QSCREEN->grabWindow(this->winId(), ui->imageLabel->x(), ui->imageLabel->y(),
                                       ui->imageLabel->width(), ui->imageLabel->height());
    temp.save(imagePath);
}

void MainWindow::on_button_label_released() {

    clickLabel ^= true; // set clickLabel to true/false
    clickCrop = false;

    if (clickLabel) {
        ui->button_label->setStyleSheet("QPushButton {"
                                        "background: #ffffff;"
                                        "border-style: solid;"
                                        "border-width: 3px;"
                                        "padding: 10px 10px 10px 10px;"
                                        "border-color: rgb(47,160,245);"
                                        "border-radius: 25;}"
                                        "QPushButton:hover {"
                                        "border-color: rgb(8,123,209);}");
        ui->button_crop->setStyleSheet("QPushButton {"
                                       "background: #ffffff;"
                                        "border-style: solid;"
                                        "border-width: 3px;"
                                        "padding: 10px 10px 10px 10px;"
                                        "border-color: rgb(145, 145, 145);"
                                        "border-radius: 25;}"
                                        "QPushButton:hover {"
                                        "border-color: rgb(8,123,209);}");
    } else {
        ui->button_label->setStyleSheet("QPushButton {"
                                        "background: #ffffff;"
                                        "border-style: solid;"
                                        "border-width: 3px;"
                                        "padding: 10px 10px 10px 10px;"
                                        "border-color: rgb(145, 145, 145);"
                                        "border-radius: 25;}"
                                        "QPushButton:hover {"
                                        "border-color: rgb(8,123,209);}");
    }
}


void MainWindow::on_button_crop_released() {
    clickCrop ^= true;
    clickLabel = false;

    if (clickCrop) {
        ui->button_crop->setStyleSheet("QPushButton {"
                                       "background: #ffffff;"
                                       "border-style: solid;"
                                       "border-width: 3px;"
                                       "padding: 10px 10px 10px 10px;"
                                       "border-color: rgb(47,160,245);"
                                       "border-radius: 25;}"
                                       "QPushButton:hover {"
                                       "border-color: rgb(8,123,209);}");
        ui->button_label->setStyleSheet("QPushButton {"
                                        "background: #ffffff;"
                                         "border-style: solid;"
                                         "border-width: 3px;"
                                         "padding: 10px 10px 10px 10px;"
                                         "border-color: rgb(145, 145, 145);"
                                         "border-radius: 25;}"
                                         "QPushButton:hover {"
                                         "border-color: rgb(8,123,209);}");
    } else {
        ui->button_crop->setStyleSheet("QPushButton {"
                                       "background: #ffffff;"
                                        "border-style: solid;"
                                        "border-width: 3px;"
                                        "padding: 10px 10px 10px 10px;"
                                        "border-color: rgb(145, 145, 145);"
                                        "border-radius: 25;}"
                                        "QPushButton:hover {"
                                        "border-color: rgb(8,123,209);}");
    }
}


void MainWindow::mousePressEvent(QMouseEvent *event) {
    if (clickCrop) {
        if(ui->imageLabel->underMouse()) {
            origin = event->pos();
            if (!rubberBand)
                rubberBand = new QRubberBand(QRubberBand::Rectangle, this);
            rubberBand->setGeometry(QRect(origin, QSize()));
            rubberBand->show();
        } else {
            if (rubberBand)
                rubberBand->hide();
        }
    }
    else {
        if (rubberBand)
            rubberBand->hide();
    }
 }

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    if (clickCrop){
        rubberBand->setGeometry(QRect(origin, event->pos()).normalized());
        posMouse = event->pos();
        if (ui->imageLabel->rect().contains(posMouse)) {
//            qDebug( "move" );
        } else {
            rubberBand->hide();
        }
    } else {
        if (rubberBand)
            rubberBand->hide();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event) {

    if (clickLabel) {
        QTextEdit *label = new QTextEdit(this);
        label->setStyleSheet("QTextEdit {min-width: 8em;"
                             "min-height: 2em;"
                             "font-size: 24px;"
                             "background-color: rgb(238,238,238, 180);"
                             "border-left: 8px solid red;"
                             "border-radius: 3px;}");
        label->show();
        label->move(event->pos());

        if (ui->label->rect().contains(posMouse)) {
            QMessageBox messageBox;
            messageBox.setText("This QMessageBox is with\ncustom icon !!!");
            messageBox.setWindowTitle("QMessageBox with Custom Icon..");
            messageBox.show();
        }
    }

    if (clickCrop) {
        if (ui->imageLabel->rect().contains(posMouse)) {
            posMouse = event->pos();

            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Crop", "Crop selected area?",
                                        QMessageBox::Yes|QMessageBox::No);
            if (reply == QMessageBox::Yes) {
                qDebug("Yes clicked");

                QPixmap OriginalPix(*ui->imageLabel->pixmap());
                int oriX, oriY, selecWidth, selecHeight;

                oriX = origin.x();
                oriY = origin.y();
                selecWidth = posMouse.x() - origin.x();
                selecHeight = posMouse.y() - origin.y();

                rubberBand->hide();

                QImage newImage;
                newImage = OriginalPix.toImage();

                copyImage = newImage.copy(oriX, oriY, selecWidth, selecHeight);

                nWin = new MainWindow;
                QPixmap pix = QPixmap::fromImage(copyImage);

                nWin->show();


            } else {
                qDebug("no clicked");
            }

        } else {
            rubberBand->hide();
        }
    }



}
