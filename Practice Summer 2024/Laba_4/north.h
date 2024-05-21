#ifndef NORTH_H
#define NORTH_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class North;
}

class North : public QDialog {
    Q_OBJECT

   public:
    explicit North(QWidget *parent = nullptr);
    ~North();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::North *ui;
};

#endif  // NORTH_H
