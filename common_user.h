#ifndef COMMON_USER_H
#define COMMON_USER_H

#include <QMainWindow>

namespace Ui {
class common_user;
}

class common_user : public QMainWindow
{
    Q_OBJECT

public:
    explicit common_user(QWidget *parent = 0);
    ~common_user();

private:
    Ui::common_user *ui;
};

#endif // COMMON_USER_H
