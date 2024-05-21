#ifndef WEST_H
#define WEST_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class West;
}

class West : public QDialog {
    Q_OBJECT

   public:
    explicit West(QWidget *parent = nullptr);
    ~West();

   private slots:
    void on_close_clicked(QAbstractButton *button);

   private:
    Ui::West *ui;
};

#endif  // WEST_H
