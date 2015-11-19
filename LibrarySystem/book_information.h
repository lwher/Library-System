#ifndef BOOK_information_H
#define BOOK_information_H

#include <QMainWindow>
#include "book.h"
namespace Ui {
class book_information;
}

class book_information : public QMainWindow
{
    Q_OBJECT

public:
    explicit book_information(QWidget *parent = 0);
    ~book_information();

private slots:
    void on_search_but_clicked();

    void on_modify_but_clicked();

    void on_delete_but_clicked();

    void on_exit_but_clicked();

    bool get_book(Book &book);

    void on_insert_but_clicked();

    void on_search_id_clicked();

private:
    Ui::book_information *ui;
};

#endif // BOOK_information_H
