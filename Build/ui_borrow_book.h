/********************************************************************************
** Form generated from reading UI file 'borrow_book.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROW_BOOK_H
#define UI_BORROW_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Borrow_book
{
public:
    QTableWidget *borrow_table;
    QLabel *label_8;
    QLabel *book_user_label;
    QPushButton *pushButton;

    void setupUi(QWidget *Borrow_book)
    {
        if (Borrow_book->objectName().isEmpty())
            Borrow_book->setObjectName(QStringLiteral("Borrow_book"));
        Borrow_book->resize(400, 511);
        borrow_table = new QTableWidget(Borrow_book);
        if (borrow_table->columnCount() < 2)
            borrow_table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        borrow_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        borrow_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        borrow_table->setObjectName(QStringLiteral("borrow_table"));
        borrow_table->setGeometry(QRect(70, 80, 221, 381));
        label_8 = new QLabel(Borrow_book);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 20, 271, 471));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\206Big.png);"));
        book_user_label = new QLabel(Borrow_book);
        book_user_label->setObjectName(QStringLiteral("book_user_label"));
        book_user_label->setGeometry(QRect(100, 20, 161, 51));
        book_user_label->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(Borrow_book);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 470, 75, 23));
        label_8->raise();
        borrow_table->raise();
        book_user_label->raise();
        pushButton->raise();

        retranslateUi(Borrow_book);

        QMetaObject::connectSlotsByName(Borrow_book);
    } // setupUi

    void retranslateUi(QWidget *Borrow_book)
    {
        Borrow_book->setWindowTitle(QApplication::translate("Borrow_book", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = borrow_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Borrow_book", "\344\271\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = borrow_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Borrow_book", "\344\271\246\345\220\215", 0));
        label_8->setText(QString());
        book_user_label->setText(QApplication::translate("Borrow_book", "\345\200\237\344\271\246\346\237\245\350\257\242", 0));
        pushButton->setText(QApplication::translate("Borrow_book", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class Borrow_book: public Ui_Borrow_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROW_BOOK_H
