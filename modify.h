#ifndef MODIFY_H
#define MODIFY_H

#include <QDialog>
#include "user.h"
namespace Ui {
class modify;
}

class modify : public QDialog
{
    Q_OBJECT

public:
    explicit modify(QWidget *parent = 0);
    ~modify();

private slots:
    void on_submit_but_clicked();

    void on_exit_but_clicked();
public :
    QPoint last;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    Ui::modify *ui;
public:
    void modify_root(User root);
};

#endif // MODIFY_H
