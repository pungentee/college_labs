#include "mainwindow.h"

#include "./ui_mainwindow.h"
#include "area.h"



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_west_clicked() {
    Area area;
    area.setFlag(":/images/west.png");
    area.setPopulation(2905922);
    area.setName("Western Australia");
    area.exec();
}

void MainWindow::on_north_clicked() {
    Area area;
    area.setFlag(":/images/north.png");
    area.setPopulation(252469);
    area.setName("Northern Territory");
    area.exec();
}

void MainWindow::on_queen_clicked() {
    Area area;
    area.setFlag(":/images/queensland.png");
    area.setPopulation(5495524);
    area.setName("Queensland");
    area.exec();
}

void MainWindow::on_south_clicked() {
    Area area;
    area.setFlag(":/images/south.png");
    area.setPopulation(1860054);
    area.setName("South Australia");
    area.exec();
}

void MainWindow::on_newsouth_clicked() {
    Area area;
    area.setFlag(":/images/new_south.png");
    area.setPopulation(8394714);
    area.setName("New South Wales");
    area.exec();
}

void MainWindow::on_capital_clicked() {
    Area area;
    area.setFlag(":/images/Capital.png");
    area.setPopulation(469194);
    area.setName("Australian Capital Territory");
    area.exec();
}

void MainWindow::on_victoria_clicked() {
    Area area;
    area.setFlag(":/images/victoria.png");
    area.setPopulation(6865358);
    area.setName("Victoria");
    area.exec();
}

void MainWindow::on_tasmania_clicked() {
    Area area;
    area.setFlag(":/images/tasmania.png");
    area.setPopulation(573328);
    area.setName("Tasmania");
    area.exec();
}

