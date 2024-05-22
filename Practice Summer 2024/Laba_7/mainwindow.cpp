#include "mainwindow.h"

#include "./ui_mainwindow.h"

#include <limits>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButton_clicked() {
    auto first = {ui->lineEdit_1_1, ui->lineEdit_1_2, ui->lineEdit_1_3};
    auto second = {ui->lineEdit_2_1, ui->lineEdit_2_2, ui->lineEdit_2_3};
    auto third = {ui->lineEdit_3_1, ui->lineEdit_3_2, ui->lineEdit_3_3};

    double first_sum = 0, second_sum = 0, third_sum = 0;
    double first_mean, second_mean, third_mean;

    for (auto edit : first) {
        first_sum += edit->text().toInt();
    }

    for (auto edit : second) {
        second_sum += edit->text().toInt();
    }

    for (auto edit : third) {
        third_sum += edit->text().toInt();
    }

    first_mean = first_sum / 3;
    second_mean = second_sum / 3;
    third_mean = third_sum / 3;

    ui->mean_1->setText(QString::number(first_mean));
    ui->mean_2->setText(QString::number(second_mean));
    ui->mean_3->setText(QString::number(third_mean));

    double all_marks[] = {first_mean, second_mean, third_mean};
    int min_mark_student = -1;
    double min_mark = std::numeric_limits<double>::max();

    for (int i = 0; i < 3; i++) {
        if (min_mark > all_marks[i]) {
            min_mark = all_marks[i];
            min_mark_student = i + 1;
        }
    }

    ui->out->setText(
        QString("Мінімальний середній бал: %1, у студента %2").arg(min_mark).arg(min_mark_student));
}
