#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_calculate_clicked() {
    auto numbers = ui->numbers->toPlainText().split("\n");
    double sum = 0;
    int amount = 0;

    for (auto number : numbers) {
        if (number.toDouble() > 0) {
            sum += number.toDouble();
            amount += 1;
        }
    }

    ui->Mean_out->setText(QString::number(sum / amount));
}
