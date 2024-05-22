#ifndef EVEN_H
#define EVEN_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Even;
}

class Even : public QDialog {
    Q_OBJECT

   public:
    explicit Even(QWidget *parent = nullptr);
    ~Even();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::Even *ui;
};

#endif  // EVEN_H
