#include "even.h"

#include "ui_even.h"

Even::Even(QWidget *parent) : QDialog(parent), ui(new Ui::Even) { ui->setupUi(this); }

Even::~Even() { delete ui; }

void Even::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

