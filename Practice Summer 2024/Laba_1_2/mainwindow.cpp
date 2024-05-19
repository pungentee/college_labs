#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setWindowTitle(QString("Обчислення прибутку"));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_Calculate_clicked() {
    auto sum = ui->sum_edit->toPlainText().toDouble();
    auto interest_rate_per_month = ui->interest_rate_edit->toPlainText().toDouble() / 12;
    auto storage_period = ui->storage_period_edit->toPlainText().toDouble();

    double profit = 0;

    for(int i = 0; i < storage_period; i++) {
        profit += sum / 100 * (interest_rate_per_month);
    }

    ui->profit_value->setText(QString::number(profit));
    ui->total_sum_value->setText(QString::number(sum + profit));
}

void MainWindow::on_Clear_clicked() {
    ui->sum_edit->clear();
    ui->interest_rate_edit->clear();
    ui->storage_period_edit->clear();

    ui->profit_value->clear();
    ui->total_sum_value->clear();
}

void MainWindow::on_Quit_clicked() {
    this->window()->close();
}

