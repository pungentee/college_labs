#include "mainwindow.h"

#include "./ui_mainwindow.h"

#include <limits>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

#include <iostream>

void MainWindow::on_max_btn_clicked() {
    double max = std::numeric_limits<double>::lowest();
    auto numbers =  ui->numbers->toPlainText().split('\n');

    for (auto number : numbers) {
        auto num = number.toDouble();
        if (num > max) {
            max = num;
        }
    }

    ui->max_out->setText(QString::number(max));
}

