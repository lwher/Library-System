#ifndef DOGE_H
#define DOGE_H

#include <QWidget>
#include "class.h"
namespace Ui {
class Doge;
}

class Doge : public QWidget
{
    Q_OBJECT

public:
    explicit Doge(QWidget *parent = 0);
    ~Doge();
    void doge_warning(QString);
    void doge_success(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Doge *ui;
};

#endif // DOGE_H
