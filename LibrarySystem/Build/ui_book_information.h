/********************************************************************************
** Form generated from reading UI file 'book_information.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_INFORMATION_H
#define UI_BOOK_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_book_information
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextEdit *intro_edit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit_but;
    QLabel *label_7;
    QLabel *label_5;
    QLineEdit *author_edit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *modify_but;
    QPushButton *insert_but;
    QPushButton *delete_but;
    QLineEdit *name_edit;
    QGridLayout *gridLayout;
    QLineEdit *search_edit;
    QPushButton *search_but;
    QHBoxLayout *horizontalLayout;
    QRadioButton *name_but;
    QRadioButton *author_but;
    QRadioButton *press_but;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_8;
    QLabel *label;
    QLineEdit *press_edit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *search_id;
    QLabel *label_6;
    QLineEdit *id_edit;
    QLineEdit *search_id_edit;
    QLineEdit *IBSN_edit;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *total_edit;
    QLabel *label_4;
    QLineEdit *left_edit;
    QLabel *label_10;
    QLineEdit *level_edit;
    QTableWidget *book_table;

    void setupUi(QMainWindow *book_information)
    {
        if (book_information->objectName().isEmpty())
            book_information->setObjectName(QStringLiteral("book_information"));
        book_information->resize(1175, 684);
        centralwidget = new QWidget(book_information);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(810, 90, 247, 501));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        intro_edit = new QTextEdit(gridLayoutWidget_2);
        intro_edit->setObjectName(QStringLiteral("intro_edit"));

        gridLayout_2->addWidget(intro_edit, 10, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exit_but = new QPushButton(gridLayoutWidget_2);
        exit_but->setObjectName(QStringLiteral("exit_but"));

        horizontalLayout_3->addWidget(exit_but);


        gridLayout_2->addLayout(horizontalLayout_3, 19, 0, 1, 2);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 9, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 8, 0, 1, 1);

        author_edit = new QLineEdit(gridLayoutWidget_2);
        author_edit->setObjectName(QStringLiteral("author_edit"));

        gridLayout_2->addWidget(author_edit, 8, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        modify_but = new QPushButton(gridLayoutWidget_2);
        modify_but->setObjectName(QStringLiteral("modify_but"));

        horizontalLayout_2->addWidget(modify_but);

        insert_but = new QPushButton(gridLayoutWidget_2);
        insert_but->setObjectName(QStringLiteral("insert_but"));

        horizontalLayout_2->addWidget(insert_but);

        delete_but = new QPushButton(gridLayoutWidget_2);
        delete_but->setObjectName(QStringLiteral("delete_but"));

        horizontalLayout_2->addWidget(delete_but);


        gridLayout_2->addLayout(horizontalLayout_2, 17, 0, 1, 2);

        name_edit = new QLineEdit(gridLayoutWidget_2);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        gridLayout_2->addWidget(name_edit, 7, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        search_edit = new QLineEdit(gridLayoutWidget_2);
        search_edit->setObjectName(QStringLiteral("search_edit"));

        gridLayout->addWidget(search_edit, 0, 0, 1, 1);

        search_but = new QPushButton(gridLayoutWidget_2);
        search_but->setObjectName(QStringLiteral("search_but"));

        gridLayout->addWidget(search_but, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        name_but = new QRadioButton(gridLayoutWidget_2);
        name_but->setObjectName(QStringLiteral("name_but"));

        horizontalLayout->addWidget(name_but);

        author_but = new QRadioButton(gridLayoutWidget_2);
        author_but->setObjectName(QStringLiteral("author_but"));

        horizontalLayout->addWidget(author_but);

        press_but = new QRadioButton(gridLayoutWidget_2);
        press_but->setObjectName(QStringLiteral("press_but"));

        horizontalLayout->addWidget(press_but);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 10, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 7, 0, 1, 1);

        press_edit = new QLineEdit(gridLayoutWidget_2);
        press_edit->setObjectName(QStringLiteral("press_edit"));

        gridLayout_2->addWidget(press_edit, 9, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        search_id = new QPushButton(gridLayoutWidget_2);
        search_id->setObjectName(QStringLiteral("search_id"));

        horizontalLayout_4->addWidget(search_id);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        id_edit = new QLineEdit(gridLayoutWidget_2);
        id_edit->setObjectName(QStringLiteral("id_edit"));

        gridLayout_2->addWidget(id_edit, 6, 1, 1, 1);

        search_id_edit = new QLineEdit(gridLayoutWidget_2);
        search_id_edit->setObjectName(QStringLiteral("search_id_edit"));

        gridLayout_2->addWidget(search_id_edit, 1, 1, 1, 1);

        IBSN_edit = new QLineEdit(gridLayoutWidget_2);
        IBSN_edit->setObjectName(QStringLiteral("IBSN_edit"));

        gridLayout_2->addWidget(IBSN_edit, 4, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        total_edit = new QLineEdit(gridLayoutWidget_2);
        total_edit->setObjectName(QStringLiteral("total_edit"));

        horizontalLayout_5->addWidget(total_edit);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        left_edit = new QLineEdit(gridLayoutWidget_2);
        left_edit->setObjectName(QStringLiteral("left_edit"));

        horizontalLayout_5->addWidget(left_edit);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        level_edit = new QLineEdit(gridLayoutWidget_2);
        level_edit->setObjectName(QStringLiteral("level_edit"));

        horizontalLayout_5->addWidget(level_edit);


        gridLayout_2->addLayout(horizontalLayout_5, 11, 0, 1, 2);

        book_table = new QTableWidget(centralwidget);
        if (book_table->columnCount() < 8)
            book_table->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        book_table->setObjectName(QStringLiteral("book_table"));
        book_table->setEnabled(true);
        book_table->setGeometry(QRect(0, 90, 801, 491));
        book_table->setLayoutDirection(Qt::LeftToRight);
        book_table->setAutoFillBackground(false);
        book_table->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        book_table->setFrameShape(QFrame::NoFrame);
        book_table->setFrameShadow(QFrame::Sunken);
        book_information->setCentralWidget(centralwidget);

        retranslateUi(book_information);

        QMetaObject::connectSlotsByName(book_information);
    } // setupUi

    void retranslateUi(QMainWindow *book_information)
    {
        book_information->setWindowTitle(QApplication::translate("book_information", "MainWindow", 0));
        exit_but->setText(QApplication::translate("book_information", "\351\200\200\345\207\272", 0));
        label_7->setText(QApplication::translate("book_information", "\345\207\272\347\211\210\347\244\276", 0));
        label_5->setText(QApplication::translate("book_information", "\344\275\234\350\200\205", 0));
        modify_but->setText(QApplication::translate("book_information", "\344\277\256\346\224\271", 0));
        insert_but->setText(QApplication::translate("book_information", "\346\267\273\345\212\240", 0));
        delete_but->setText(QApplication::translate("book_information", "\345\210\240\351\231\244", 0));
        search_but->setText(QApplication::translate("book_information", "\346\220\234\347\264\242", 0));
        name_but->setText(QApplication::translate("book_information", "\344\271\246\345\220\215", 0));
        author_but->setText(QApplication::translate("book_information", "\344\275\234\350\200\205", 0));
        press_but->setText(QApplication::translate("book_information", "\345\207\272\347\211\210\347\244\276", 0));
        label_8->setText(QApplication::translate("book_information", "\347\256\200\344\273\213", 0));
        label->setText(QApplication::translate("book_information", "\344\271\246\345\220\215", 0));
        label_2->setText(QApplication::translate("book_information", "\344\271\246\345\217\267", 0));
        search_id->setText(QApplication::translate("book_information", "\346\237\245\350\257\242", 0));
        label_6->setText(QApplication::translate("book_information", "\344\271\246\345\217\267", 0));
        label_9->setText(QApplication::translate("book_information", "IBSN", 0));
        label_3->setText(QApplication::translate("book_information", "\350\227\217\344\271\246\351\207\217", 0));
        label_4->setText(QApplication::translate("book_information", "\345\211\251\344\275\231\351\207\217", 0));
        label_10->setText(QApplication::translate("book_information", "\347\255\211\347\272\247", 0));
        QTableWidgetItem *___qtablewidgetitem = book_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("book_information", "\344\271\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = book_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("book_information", "IBSN", 0));
        QTableWidgetItem *___qtablewidgetitem2 = book_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("book_information", "\347\255\211\347\272\247", 0));
        QTableWidgetItem *___qtablewidgetitem3 = book_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("book_information", "\344\271\246\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem4 = book_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("book_information", "\344\275\234\350\200\205", 0));
        QTableWidgetItem *___qtablewidgetitem5 = book_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("book_information", "\345\207\272\347\211\210\347\244\276", 0));
        QTableWidgetItem *___qtablewidgetitem6 = book_table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("book_information", "\350\227\217\344\271\246\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem7 = book_table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("book_information", "\345\211\251\344\275\231\351\207\217", 0));
    } // retranslateUi

};

namespace Ui {
    class book_information: public Ui_book_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_INFORMATION_H
