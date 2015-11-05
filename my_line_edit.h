#ifndef MY_LINE_EDIT_H
#define MY_LINE_EDIT_H


class my_line_edit
{
public:
    explicit my_line_edit(QWidget *parent = 0);

protected:
    virtual void mouse_press_event(QMouseEvent *event);

signals:
    void clicked();

public slots:
};

#endif // MY_LINE_EDIT_H
