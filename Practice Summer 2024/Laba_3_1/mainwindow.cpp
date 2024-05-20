#include "mainwindow.h"

#include "./ui_mainwindow.h"

enum class Lang {
    Ukr,
    Eng,
};

auto lang = Lang::Ukr;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_English_toggled(bool checked) {
    lang = Lang::Eng;
     MainWindow::on_day_num_valueChanged(ui->day_num->value());
}

void MainWindow::on_Ukrainian_toggled(bool checked) {
    lang = Lang::Ukr;
    MainWindow::on_day_num_valueChanged(ui->day_num->value());
}

void MainWindow::on_day_num_valueChanged(int day_num) {
    if(lang == Lang::Eng) {
        switch(day_num) {
            case 1:
                ui->day_out->setText(QString("Monday"));
                break;
            case 2:
                ui->day_out->setText(QString("Tuesday"));
                break;
            case 3:
                ui->day_out->setText(QString("Wednesday"));
                break;
            case 4:
                ui->day_out->setText(QString("Thursday"));
                break;
            case 5:
                ui->day_out->setText(QString("Friday"));
                break;
            case 6:
                ui->day_out->setText(QString("Saturday"));
                break;
            case 7:
                ui->day_out->setText(QString("Sunday"));
                break;

            default:
                ui->day_out->clear();
                break;
        }
    } else if (lang == Lang::Ukr) {
        switch(day_num) {
            case 1:
                ui->day_out->setText(QString("Понеділок"));
                break;
            case 2:
                ui->day_out->setText(QString("Вівторок"));
                break;
            case 3:
                ui->day_out->setText(QString("Середа"));
                break;
            case 4:
                ui->day_out->setText(QString("Четвер"));
                break;
            case 5:
                ui->day_out->setText(QString("Пʼятниця"));
                break;
            case 6:
                ui->day_out->setText(QString("Субота"));
                break;
            case 7:
                ui->day_out->setText(QString("Неділя"));
                break;

            default:
                ui->day_out->clear();
                break;
        }
    } else {
        ui->day_out->clear();
    }
}

