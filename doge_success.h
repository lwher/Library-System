#ifndef DOGE_SUCCESS_H
#define DOGE_SUCCESS_H

#include <QWidget>

namespace Ui {
class doge_success;
}

class doge_success : public QWidget
{
    Q_OBJECT

public:
    explicit doge_success(QWidget *parent = 0);
    ~doge_success();

private:
    Ui::doge_success *ui;
};

#endif // DOGE_SUCCESS_H
