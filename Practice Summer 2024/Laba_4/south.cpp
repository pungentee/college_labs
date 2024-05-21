#include "south.h"

#include "ui_south.h"

South::South(QWidget *parent) : QDialog(parent), ui(new Ui::South) { ui->setupUi(this); }

South::~South() { delete ui; }

void South::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

