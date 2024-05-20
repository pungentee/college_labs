#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ui->Monday->setAutoFillBackground(true);
    ui->Tuesday->setAutoFillBackground(true);
    ui->Wednesday->setAutoFillBackground(true);
    ui->Thursday->setAutoFillBackground(true);
    ui->Friday->setAutoFillBackground(true);
}

MainWindow::~MainWindow() { delete ui; }

enum class Week_day {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void MainWindow::on_DayNumber_valueChanged(int day_number) {
    QPalette unactive_palette = QPalette();

    QPalette active_palette = QPalette();
    active_palette.setColor(QPalette::Window, Qt::red);

    ui->Monday->setPalette(unactive_palette);
    ui->Tuesday->setPalette(unactive_palette);
    ui->Wednesday->setPalette(unactive_palette);
    ui->Thursday->setPalette(unactive_palette);
    ui->Friday->setPalette(unactive_palette);

    ui->timetable->clear();

    if(Week_day(day_number) == Week_day::Monday) {
        ui->Monday->setPalette(active_palette);
        ui->Monday->show();
        ui->timetable->setText(QString("1) Фізра\n2) Математика\n3) Укр. мова"));
    } else if (Week_day(day_number) == Week_day::Tuesday) {
        ui->Tuesday->setPalette(active_palette);
        ui->Tuesday->show();
        ui->timetable->setText(QString("1) Укр. літ.\n2) Мат. аналіз\n3) Географія"));
    } else if (Week_day(day_number) == Week_day::Wednesday) {
        ui->Wednesday->setPalette(active_palette);
        ui->Wednesday->show();
        ui->timetable->setText(QString("1) Програмування\n2) Програмування\n3) Алгоритми"));
    } else if (Week_day(day_number) == Week_day::Thursday) {
        ui->Thursday->setPalette(active_palette);
        ui->Thursday->show();
        ui->timetable->setText(QString("1) Біологія\n2) Фізика\n3) Захист України"));
    } else if (Week_day(day_number) == Week_day::Friday) {
        ui->Friday->setPalette(active_palette);
        ui->Friday->show();
        ui->timetable->setText(QString("1) Диф. рівняння\n2) Мат. аналіз\n3) Зар. літ."));
    }
}

