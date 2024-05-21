#include "tasmania.h"

#include "ui_tasmania.h"

Tasmania::Tasmania(QWidget *parent) : QDialog(parent), ui(new Ui::Tasmania) { ui->setupUi(this); }

Tasmania::~Tasmania() { delete ui; }

void Tasmania::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

