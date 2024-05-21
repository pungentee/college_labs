#ifndef VICTORIA_H
#define VICTORIA_H

#include <QDialog>

namespace Ui {
class victoria;
}

class victoria : public QDialog {
    Q_OBJECT

   public:
    explicit victoria(QWidget *parent = nullptr);
    ~victoria();

   private:
    Ui::victoria *ui;
};

#endif  // VICTORIA_H
