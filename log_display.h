#ifndef LOG_DISPLAY_H
#define LOG_DISPLAY_H

#include <QMainWindow>

namespace Ui {
class log_display;
}

class log_display : public QMainWindow
{
    Q_OBJECT

public:
    explicit log_display(QWidget *parent = 0);
    ~log_display();

private slots:
    void on_exit_but_clicked();

    void on_user_id_search_but_clicked();

    void on_all_search_but_clicked();

    void on_book_id_search_but_clicked();

private:
    Ui::log_display *ui;
};

#endif // LOG_DISPLAY_H
