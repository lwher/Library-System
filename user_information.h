#ifndef USER_information_H
#define USER_information_H

#include <QMainWindow>
#include "user.h"

namespace Ui {
class user_information;
}

class user_information : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_information(QWidget *parent = 0);
    ~user_information();

private slots:

    void on_insert_but_clicked();

    void on_modify_but_clicked();

    void on_delete_but_clicked();

    void on_exit_but_clicked();

    bool get_user(User &user);

    void on_search_but_clicked();

    void on_search_id_but_clicked();
public :
    QPoint last;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    Ui::user_information *ui;
};

#endif // USER_information_H
//book_
