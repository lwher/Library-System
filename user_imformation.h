#ifndef USER_IMFORMATION_H
#define USER_IMFORMATION_H

#include <QMainWindow>

namespace Ui {
class user_imformation;
}

class user_imformation : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_imformation(QWidget *parent = 0);
    ~user_imformation();

private slots:
    void on_lvlup_but_clicked();

    void on_modify_but_clicked();

    void on_delete_but_clicked();

    void on_search_but_clicked();

private:
    Ui::user_imformation *ui;
};

#endif // USER_IMFORMATION_H
