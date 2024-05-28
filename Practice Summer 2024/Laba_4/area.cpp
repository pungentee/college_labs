#include "area.h"

#include "ui_area.h"

Area::Area(QWidget *parent) : QDialog(parent), ui(new Ui::Area) { ui->setupUi(this); }

Area::~Area() { delete ui; }


void Area::setFlag(QString path){
    ui->Flag->setStyleSheet("border-image: url(" + path + ") 0 0 0 0 stretch stretch;");
}

void Area::setPopulation(int number){
    ui->Population_out->setText(QString::number(number));
}

void Area::setName(QString name){
    ui->Name_out->setText(name);
}
