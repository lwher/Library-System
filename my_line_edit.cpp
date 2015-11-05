#include "my_line_edit.h"

my_line_edit::my_line_edit(QWidge *parent) : QLineEdit(parent)
{
}
void mylineedit::mouse_press_event(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        emit clicked();
    }
    QLineEdit::mouse_press_event(event);
}

