#ifndef NON_EVEN_H
#define NON_EVEN_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Non_even;
}

class Non_even : public QDialog {
    Q_OBJECT

   public:
    explicit Non_even(QWidget *parent = nullptr);
    ~Non_even();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::Non_even *ui;
};

#endif  // NON_EVEN_H
