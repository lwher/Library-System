#ifndef BORROW_BOOK_H
#define BORROW_BOOK_H

#include <QWidget>

namespace Ui {
class Borrow_book;
}

class Borrow_book : public QWidget
{
    Q_OBJECT

public:
    explicit Borrow_book(QWidget *parent = 0);
    ~Borrow_book();
    void work();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Borrow_book *ui;
};

#endif // BORROW_BOOK_H
