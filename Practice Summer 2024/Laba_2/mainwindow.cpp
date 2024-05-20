#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_Monday_toggled(bool checked) {
    ui->timetable->clear();
    ui->timetable->setText(QString("1) Фізра\n2) Математика\n3) Укр. мова"));
}

void MainWindow::on_Tuesday_toggled(bool checked) {
    ui->timetable->clear();
    ui->timetable->setText(QString("1) Укр. літ.\n2) Мат. аналіз\n3) Географія"));
}

void MainWindow::on_Wednesday_toggled(bool checked) {
    ui->timetable->clear();
    ui->timetable->setText(QString("1) Програмування\n2) Програмування\n3) Алгоритми"));
}

void MainWindow::on_Thursday_toggled(bool checked) {
    ui->timetable->clear();
    ui->timetable->setText(QString("1) Біологія\n2) Фізика\n3) Захист України"));
}

void MainWindow::on_Friday_toggled(bool checked) {
    ui->timetable->clear();
    ui->timetable->setText(QString("1) Диф. рівняння\n2) Мат. аналіз\n3) Зар. літ."));
}

