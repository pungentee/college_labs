#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

   public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

   private slots:
    void on_west_clicked();

    void on_victoria_clicked();

    void on_new_south_clicked();

    void on_south_clicked(bool checked);

    void on_queen_clicked(bool checked);

    void on_north_clicked();

    void on_capital_clicked(bool checked);

    void on_tasmania_clicked(bool checked);

   private:
    Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
