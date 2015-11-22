/********************************************************************************
** Form generated from reading UI file 'book_display.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_DISPLAY_H
#define UI_BOOK_DISPLAY_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_book_display
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextEdit *intro_edit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit_but;
    QLineEdit *author_edit;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *name_edit;
    QLineEdit *press_edit;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *total_edit;
    QLabel *label_4;
    QLineEdit *left_edit;
    QLabel *label_10;
    QLineEdit *level_edit;
    QLabel *label_6;
    QLineEdit *id_edit;
    QLineEdit *ISBN_edit;
    QLabel *label_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *book_display)
    {
        if (book_display->objectName().isEmpty())
            book_display->setObjectName(QStringLiteral("book_display"));
        book_display->resize(783, 700);
        centralwidget = new QWidget(book_display);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(290, 80, 247, 501));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        intro_edit = new QTextEdit(gridLayoutWidget_2);
        intro_edit->setObjectName(QStringLiteral("intro_edit"));
        intro_edit->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(intro_edit, 7, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exit_but = new QPushButton(gridLayoutWidget_2);
        exit_but->setObjectName(QStringLiteral("exit_but"));

        horizontalLayout_3->addWidget(exit_but);


        gridLayout_2->addLayout(horizontalLayout_3, 15, 0, 1, 2);

        author_edit = new QLineEdit(gridLayoutWidget_2);
        author_edit->setObjectName(QStringLiteral("author_edit"));

        gridLayout_2->addWidget(author_edit, 5, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        name_edit = new QLineEdit(gridLayoutWidget_2);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        gridLayout_2->addWidget(name_edit, 4, 1, 1, 1);

        press_edit = new QLineEdit(gridLayoutWidget_2);
        press_edit->setObjectName(QStringLiteral("press_edit"));

        gridLayout_2->addWidget(press_edit, 6, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

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


        gridLayout_2->addLayout(horizontalLayout_5, 8, 0, 1, 2);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        id_edit = new QLineEdit(gridLayoutWidget_2);
        id_edit->setObjectName(QStringLiteral("id_edit"));

        gridLayout_2->addWidget(id_edit, 3, 1, 1, 1);

        ISBN_edit = new QLineEdit(gridLayoutWidget_2);
        ISBN_edit->setObjectName(QStringLiteral("ISBN_edit"));

        gridLayout_2->addWidget(ISBN_edit, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 60, 301, 541));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\206Big.png);"));
        book_display->setCentralWidget(centralwidget);
        label_2->raise();
        gridLayoutWidget_2->raise();
        ISBN_edit->raise();
        statusbar = new QStatusBar(book_display);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        book_display->setStatusBar(statusbar);
        toolBar = new QToolBar(book_display);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        book_display->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(book_display);

        QMetaObject::connectSlotsByName(book_display);
    } // setupUi

    void retranslateUi(QMainWindow *book_display)
    {
        book_display->setWindowTitle(QApplication::translate("book_display", "MainWindow", 0));
        exit_but->setText(QApplication::translate("book_display", "\345\205\263\351\227\255", 0));
        label_5->setText(QApplication::translate("book_display", "\344\275\234\350\200\205", 0));
        label_8->setText(QApplication::translate("book_display", "\347\256\200\344\273\213", 0));
        label_7->setText(QApplication::translate("book_display", "\345\207\272\347\211\210\347\244\276", 0));
        label->setText(QApplication::translate("book_display", "\344\271\246\345\220\215", 0));
        label_9->setText(QApplication::translate("book_display", "ISBN", 0));
        label_3->setText(QApplication::translate("book_display", "\350\227\217\344\271\246\351\207\217", 0));
        label_4->setText(QApplication::translate("book_display", "\345\211\251\344\275\231\351\207\217", 0));
        label_10->setText(QApplication::translate("book_display", "\347\255\211\347\272\247", 0));
        label_6->setText(QApplication::translate("book_display", "\344\271\246\345\217\267", 0));
        label_2->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("book_display", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class book_display: public Ui_book_display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_DISPLAY_H
