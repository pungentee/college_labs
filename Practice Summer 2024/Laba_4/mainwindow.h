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

    void on_north_clicked();

    void on_queen_clicked();

    void on_south_clicked();

    void on_newsouth_clicked();

    void on_capital_clicked();

    void on_victoria_clicked();

    void on_tasmania_clicked();

   private:
    Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
