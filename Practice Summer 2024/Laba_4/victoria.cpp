#include "victoria.h"

#include "ui_victoria.h"

victoria::victoria(QWidget *parent) : QDialog(parent), ui(new Ui::victoria) { ui->setupUi(this); }

victoria::~victoria() { delete ui; }
