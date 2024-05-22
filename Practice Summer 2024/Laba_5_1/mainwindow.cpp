#include "mainwindow.h"

#include "even.h"
#include "non_even.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_check_btn_clicked() {
    auto numbers =  ui->numbers->toPlainText().split('\n');

    for (auto number : numbers) {
        int num = number.toInt();
        if (num < 0 && num % 2 == 0) {
            Even even;
            even.exec();

            return;
        }
    }

    Non_even non_even;
    non_even.exec();
}
