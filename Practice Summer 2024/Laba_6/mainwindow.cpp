#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    for (int i = 0; i < ui->in->columnCount(); i++) {
        delete ui->in->item(0, i);
    }
    delete ui;
}

enum class Mode {
    Random,
    Selfmade,
};

Mode mode = Mode::Random;

void MainWindow::on_start_btn_clicked() {
    QVector<int> numbers;

    if (mode == Mode::Random) {
        for (int i = 0; i < ui->in->columnCount(); i++) {
            auto *item = new QTableWidgetItem(QString::number(rand() % 10 + 1));
            ui->in->setItem(0, i, item);
        }
    }

    for (int i = 0; i < ui->in->columnCount(); i++) {
        numbers.append(ui->in->item(0, i)->text().toInt() % 2 == 0 ? 0 : 1);
    }

    for (int i = 0; i < ui->out->columnCount(); i++) {
        auto *item = new QTableWidgetItem(QString::number(numbers.takeFirst()));
        ui->out->setItem(0, i, item);
    }
}

void MainWindow::on_selfmade_check_toggled(bool checked) { mode = Mode::Selfmade; }

void MainWindow::on_random_check_toggled(bool checked) { mode = Mode::Random; }

void MainWindow::on_clear_btn_clicked() {
    for (int i = 0; i < ui->in->columnCount(); i++) {
        delete ui->in->item(0, i);
        delete ui->out->item(0, i);
    }
}
