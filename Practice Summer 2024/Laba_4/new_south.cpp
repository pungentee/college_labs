#include "new_south.h"

#include "ui_new_south.h"

New_south::New_south(QWidget *parent) : QDialog(parent), ui(new Ui::New_south) {
    ui->setupUi(this);
}

New_south::~New_south() { delete ui; }

void New_south::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

