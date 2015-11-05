#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "administer.h"
#include "regist.h"
#include "common_user.h"
namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_log_but_clicked();

    void on_exit_but_clicked();

    void on_reg_but_clicked();

private:
    Ui::login *ui;
    administer admin_window;
    regist regist_window;
    common_user user_window;
};

#endif // LOGIN_H
