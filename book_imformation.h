#ifndef BOOK_IMFORMATION_H
#define BOOK_IMFORMATION_H

#include <QMainWindow>

namespace Ui {
class book_imformation;
}

class book_imformation : public QMainWindow
{
    Q_OBJECT

public:
    explicit book_imformation(QWidget *parent = 0);
    ~book_imformation();

private slots:
    void on_search_but_clicked();

    void on_add_book_but_clicked();

    void on_modify_but_clicked();

    void on_delete_but_clicked();

private:
    Ui::book_imformation *ui;
};

#endif // BOOK_IMFORMATION_H
