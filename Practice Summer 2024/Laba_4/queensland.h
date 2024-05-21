#ifndef QUEENSLAND_H
#define QUEENSLAND_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class queensland;
}

class queensland : public QDialog {
    Q_OBJECT

   public:
    explicit queensland(QWidget *parent = nullptr);
    ~queensland();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::queensland *ui;
};

#endif  // QUEENSLAND_H
