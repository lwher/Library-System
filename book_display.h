#ifndef BOOK_DISPLAY_H
#define BOOK_DISPLAY_H

#include <QMainWindow>

namespace Ui {
class book_display;
}

class book_display : public QMainWindow
{
    Q_OBJECT

public:
    explicit book_display(QWidget *parent = 0);
    ~book_display();
    void get_started(QString);

private slots:
    void on_exit_but_clicked();

private:
    Ui::book_display *ui;
};

#endif // BOOK_DISPLAY_H
