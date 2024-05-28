#include "capital.h"

#include "ui_capital.h"

Capital::Capital(QWidget *parent) : QDialog(parent), ui(new Ui::Capital) { ui->setupUi(this); }

Capital::~Capital() { delete ui; }

void Capital::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

