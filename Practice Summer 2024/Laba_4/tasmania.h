#ifndef TASMANIA_H
#define TASMANIA_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Tasmania;
}

class Tasmania : public QDialog {
    Q_OBJECT

   public:
    explicit Tasmania(QWidget *parent = nullptr);
    ~Tasmania();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::Tasmania *ui;
};

#endif  // TASMANIA_H
