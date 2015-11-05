#ifndef EVENT_IMFORMATION_H
#define EVENT_IMFORMATION_H

#include <QMainWindow>
#include "class.h"
namespace Ui {
class event_imformation;
}

class event_imformation : public QMainWindow
{
    Q_OBJECT

public:
    explicit event_imformation(QWidget *parent = 0);
    ~event_imformation();

private slots:
    void on_add_but_clicked();

    void on_delete_but_clicked();

    void on_search_but_clicked();

private:
    Ui::event_imformation *ui;
};

#endif // EVENT_IMFORMATION_H
