#ifndef USERDISPLAY_H
#define USERDISPLAY_H

#include <QMainWindow>

namespace Ui {
class UserDisplay;
}

class UserDisplay : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserDisplay(QWidget *parent = 0);
    ~UserDisplay();

private:
    Ui::UserDisplay *ui;
};

#endif // USERDISPLAY_H
