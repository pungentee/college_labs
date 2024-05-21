#include "mainwindow.h"

#include "./ui_mainwindow.h"

#include "victoria.h"
#include "west.h"
#include "new_south.h"
#include "south.h"
#include "queensland.h"
#include "north.h"
#include "capital.h"
#include "tasmania.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_west_clicked() {
    West west;
    west.exec();
}

void MainWindow::on_victoria_clicked() {
    victoria victoria;
    victoria.exec();
}

void MainWindow::on_new_south_clicked() {
    New_south new_south;
    new_south.exec();
}

void MainWindow::on_south_clicked(bool checked) {
    South south;
    south.exec();
}

void MainWindow::on_queen_clicked(bool checked) {
    queensland queen;
    queen.exec();
}

void MainWindow::on_north_clicked() {
    North north;
    north.exec();
}

void MainWindow::on_capital_clicked(bool checked) {
    Capital capital;
    capital.exec();
}

void MainWindow::on_tasmania_clicked(bool checked) {
    Tasmania tasmania;
    tasmania.exec();
}

