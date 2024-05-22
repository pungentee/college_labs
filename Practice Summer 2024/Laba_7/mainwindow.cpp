#include "mainwindow.h"

#include <limits>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    for (int i = 0; i < ui->marks->rowCount(); i++) {
        delete ui->marks->item(i, ui->marks->columnCount() - 1);
    }
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    QVector<double> mean_marks;

    for (int i = 0; i < ui->marks->rowCount(); i++) {
        double marks_sum = 0;

        for (int j = 0; j < ui->marks->columnCount() - 1; j++) {
            auto item = ui->marks->item(i, j);
            if (item != nullptr) {
                marks_sum += item->text().toInt();
            }
        }

        mean_marks.append(marks_sum / (ui->marks->columnCount() - 1));
    }

    for (int i = 0; i < ui->marks->rowCount(); i++) {
        auto *item = new QTableWidgetItem(QString::number(mean_marks[i]));
        ui->marks->setItem(i, ui->marks->columnCount() - 1, item);
    }

    double min_mark = std::numeric_limits<double>::max();
    int min_mark_student = 0;

    for (int i = 0; i < ui->marks->rowCount(); i++) {
        if (mean_marks[i] < min_mark) {
            min_mark = mean_marks[i];
            min_mark_student = i + 1;
        }
    }

    ui->out->setText(QString("Найнижчий середній бал %1, у студента №%2").arg(min_mark).arg(min_mark_student));
}
