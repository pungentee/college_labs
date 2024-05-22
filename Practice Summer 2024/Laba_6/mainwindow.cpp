#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

enum class Mode {
    Random,
    Selfmade,
};

Mode mode = Mode::Random;

void MainWindow::on_start_btn_clicked() {
    QVector<int> numbers;

    auto numbers_edits_in = {ui->lineEdit_1, ui->lineEdit_2, ui->lineEdit_3, ui->lineEdit_4,
                             ui->lineEdit_5, ui->lineEdit_6, ui->lineEdit_7, ui->lineEdit_8,
                             ui->lineEdit_9, ui->lineEdit_10};

    auto numbers_edits_out = {ui->lineEdit_11, ui->lineEdit_12, ui->lineEdit_13, ui->lineEdit_14,
                              ui->lineEdit_15, ui->lineEdit_16, ui->lineEdit_17, ui->lineEdit_18,
                              ui->lineEdit_19, ui->lineEdit_20};

    if (mode == Mode::Random) {
        for (auto edit : numbers_edits_in) {
            int number = rand() % 10 + 1;
            edit->setText(QString::number(number));
        }
    }

    for (auto edit : numbers_edits_in) {
        numbers.append(edit->text().toInt() % 2 == 0 ? 0 : 1);
    }

    for (auto edit : numbers_edits_out) {
        edit->setText(QString::number(numbers.takeFirst()));
    }
}

void MainWindow::on_selfmade_check_toggled(bool checked) { mode = Mode::Selfmade; }

void MainWindow::on_random_check_toggled(bool checked) { mode = Mode::Random; }
