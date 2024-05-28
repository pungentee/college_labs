#ifndef AREA_H
#define AREA_H

#include <QDialog>

namespace Ui {
class Area;
}

class Area : public QDialog {
    Q_OBJECT

   public:
    explicit Area(QWidget *parent = nullptr);
    ~Area();
    void setFlag(QString path);
    void setPopulation(int number);
    void setName(QString name);

   private:
    Ui::Area *ui;
};

#endif  // AREA_H
