#ifndef SOUTH_H
#define SOUTH_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class South;
}

class South : public QDialog {
    Q_OBJECT

   public:
    explicit South(QWidget *parent = nullptr);
    ~South();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::South *ui;
};

#endif  // SOUTH_H
