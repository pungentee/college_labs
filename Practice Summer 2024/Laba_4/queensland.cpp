#include "queensland.h"

#include "ui_queensland.h"

queensland::queensland(QWidget *parent) : QDialog(parent), ui(new Ui::queensland) {
    ui->setupUi(this);
}

queensland::~queensland() { delete ui; }

void queensland::on_buttonBox_clicked(QAbstractButton *button) {
    this->close();
}

