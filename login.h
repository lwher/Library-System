#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
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
public :
    QPoint last;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    Ui::login *ui;
};

#endif // LOGIN_H
