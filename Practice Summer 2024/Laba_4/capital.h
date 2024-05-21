#ifndef CAPITAL_H
#define CAPITAL_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Capital;
}

class Capital : public QDialog {
    Q_OBJECT

   public:
    explicit Capital(QWidget *parent = nullptr);
    ~Capital();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::Capital *ui;
};

#endif  // CAPITAL_H
