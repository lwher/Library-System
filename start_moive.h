#ifndef START_MOIVE_H
#define START_MOIVE_H

#include <QMainWindow>
#include "class.h"
namespace Ui {
class start_moive;
}

class start_moive : public QMainWindow
{
    Q_OBJECT

public:
    explicit start_moive(QWidget *parent = 0);
    ~start_moive();
    void work();
public :
    QPoint last;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
private:
    Ui::start_moive *ui;
};

#endif // START_MOIVE_H
