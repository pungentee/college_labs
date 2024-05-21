#include "west.h"

#include "ui_west.h"

West::West(QWidget *parent) : QDialog(parent), ui(new Ui::West) { ui->setupUi(this); }

West::~West() { delete ui; }


void West::on_close_clicked(QAbstractButton *button) {
    this->close();
}

