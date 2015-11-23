#ifndef EVENT_information_H
#define EVENT_information_H

#include <QMainWindow>
namespace Ui {
class event_information;
}

class event_information : public QMainWindow
{
    Q_OBJECT

public:
    explicit event_information(QWidget *parent = 0);
    ~event_information();

private slots:
    void on_search_but_clicked();

    void on_exit_but_clicked();

    void on_book_info_but_clicked();

    void on_user_info_but_clicked();

    void on_modify_but_clicked();

    void on_user_id_search_but_clicked();

    void on_book_id_search_but_clicked();

    void on_insert_but_clicked();

    void on_return_but_clicked();

    void on_log_but_clicked();
public :
    QPoint last;
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
private:
    Ui::event_information *ui;
};

#endif // EVENT_information_H
