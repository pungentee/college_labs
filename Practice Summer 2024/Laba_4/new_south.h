#ifndef NEW_SOUTH_H
#define NEW_SOUTH_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class New_south;
}

class New_south : public QDialog {
    Q_OBJECT

   public:
    explicit New_south(QWidget *parent = nullptr);
    ~New_south();

   private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

   private:
    Ui::New_south *ui;
};

#endif  // NEW_SOUTH_H
