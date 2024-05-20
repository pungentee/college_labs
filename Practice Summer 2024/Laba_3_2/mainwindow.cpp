#include "mainwindow.h"

#include "./ui_mainwindow.h"

#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_result_clicked() {
    QPalette palette;
    QPixmap pixmap;
    QString imagePath;
    QString seasonName;

    int month_num = ui->month_in->value();

    if(month_num < 1 || month_num > 12) {
        MainWindow::on_clear_clicked();

        Dialog dialog;
        dialog.exec();

        return;
    }

    switch(month_num) {
        case 1:
        case 2:
        case 12:
            seasonName = "Зима";
            imagePath = ":/images/winter.jpg";
            break;
        case 3:
        case 4:
        case 5:
            seasonName = "Весна";
            imagePath = ":/images/spring.jpg";
            break;
        case 6:
        case 7:
        case 8:
            seasonName = "Літо";
            imagePath = ":/images/summer.jpg";
            break;
        case 9:
        case 10:
        case 11:
            seasonName = "Осінь";
            imagePath = ":/images/fall.jpg";
            break;
    }

    ui->season_out->setText(seasonName);
    this->setPalette(palette);

    if(!imagePath.isEmpty()) {
        pixmap.load(imagePath);
        pixmap = pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        palette.setBrush(QPalette::Window, pixmap);
        this->setPalette(palette);
    }
}

void MainWindow::on_clear_clicked() {
    QPalette palette;
    this->setPalette(palette);
    ui->season_out->clear();
}

