#include "mainwindow.h"
#include <math.h>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ui->formula_->show();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_Calculate_clicked() {
    auto x = ui->x_edit->toPlainText().toInt();

    auto y = (0.2 * pow(x, 2) - x)/((sqrt(3) + x) * (1 + 2 * x)) + (2 * pow(x - 1, 3)) / (pow(sin(x), 2) + 1);

    ui->result->setText(QString::number(y));
}

