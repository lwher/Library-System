#ifndef USER_DISPLAY_H
#define USER_DISPLAY_H

#include <QMainWindow>

namespace Ui {
class user_display;
}

class user_display : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_display(QWidget *parent = 0);
    ~user_display();
    void get_started(QString);

private slots:
    void on_exit_but_clicked();
public :
    QPoint last;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    Ui::user_display *ui;
};

#endif // USER_DISPLAY_H
