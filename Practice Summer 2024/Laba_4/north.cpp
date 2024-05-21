#include "north.h"

#include "ui_north.h"

North::North(QWidget *parent) : QDialog(parent), ui(new Ui::North) { ui->setupUi(this); }

North::~North() { delete ui; }

void North::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

