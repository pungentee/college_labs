#include "non_even.h"

#include "ui_non_even.h"

Non_even::Non_even(QWidget *parent) : QDialog(parent), ui(new Ui::Non_even) { ui->setupUi(this); }

Non_even::~Non_even() { delete ui; }

void Non_even::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

