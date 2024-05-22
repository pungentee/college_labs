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
    void on_start_btn_clicked();

    void on_selfmade_check_toggled(bool checked);

    void on_random_check_toggled(bool checked);

    void on_clear_btn_clicked();

   private:
    Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
