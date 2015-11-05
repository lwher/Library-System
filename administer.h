#ifndef ADMINISTER_H
#define ADMINISTER_H

#include <QMainWindow>
#include "book_imformation.h"
#include "user_imformation.h"
#include "event_imformation.h"

namespace Ui {
class administer;
}

class administer : public QMainWindow
{
    Q_OBJECT

public:
    explicit administer(QWidget *parent = 0);
    ~administer();

private slots:
    void on_event_manage_but_clicked();

    void on_user_manage_but_clicked();

    void on_book_manage_but_clicked();

    void on_exit_but_clicked();

private:
    Ui::administer *ui;
    book_imformation book_window;
    user_imformation user_window;
    event_imformation event_window;
};

#endif // ADMINISTER_H
