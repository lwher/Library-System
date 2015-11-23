/********************************************************************************
** Form generated from reading UI file 'log_display.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_DISPLAY_H
#define UI_LOG_DISPLAY_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_display
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *all_search_but;
    QPushButton *exit_but;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *user_id_edit;
    QPushButton *user_id_search_but;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *book_id_edit;
    QPushButton *book_id_search_but;
    QTextEdit *log_text;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *log_display)
    {
        if (log_display->objectName().isEmpty())
            log_display->setObjectName(QStringLiteral("log_display"));
        log_display->resize(895, 697);
        centralwidget = new QWidget(log_display);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(600, 130, 221, 501));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        gridLayout->addLayout(horizontalLayout_6, 4, 1, 1, 2);

        all_search_but = new QPushButton(layoutWidget);
        all_search_but->setObjectName(QStringLiteral("all_search_but"));

        gridLayout->addWidget(all_search_but, 8, 1, 1, 2);

        exit_but = new QPushButton(layoutWidget);
        exit_but->setObjectName(QStringLiteral("exit_but"));

        gridLayout->addWidget(exit_but, 14, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 6, 1, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        user_id_edit = new QLineEdit(layoutWidget);
        user_id_edit->setObjectName(QStringLiteral("user_id_edit"));

        horizontalLayout_5->addWidget(user_id_edit);

        user_id_search_but = new QPushButton(layoutWidget);
        user_id_search_but->setObjectName(QStringLiteral("user_id_search_but"));

        horizontalLayout_5->addWidget(user_id_search_but);


        gridLayout->addLayout(horizontalLayout_5, 2, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        book_id_edit = new QLineEdit(layoutWidget);
        book_id_edit->setObjectName(QStringLiteral("book_id_edit"));

        horizontalLayout_2->addWidget(book_id_edit);

        book_id_search_but = new QPushButton(layoutWidget);
        book_id_search_but->setObjectName(QStringLiteral("book_id_search_but"));

        horizontalLayout_2->addWidget(book_id_search_but);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 2);

        log_text = new QTextEdit(centralwidget);
        log_text->setObjectName(QStringLiteral("log_text"));
        log_text->setGeometry(QRect(80, 130, 511, 501));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 71, 791, 581));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\206Big.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(670, 10, 201, 111));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/22333.png);"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(370, 70, 161, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        log_display->setCentralWidget(centralwidget);
        label->raise();
        layoutWidget->raise();
        log_text->raise();
        label_2->raise();
        label_12->raise();
        menubar = new QMenuBar(log_display);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 895, 23));
        log_display->setMenuBar(menubar);
        statusbar = new QStatusBar(log_display);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        log_display->setStatusBar(statusbar);

        retranslateUi(log_display);

        QMetaObject::connectSlotsByName(log_display);
    } // setupUi

    void retranslateUi(QMainWindow *log_display)
    {
        log_display->setWindowTitle(QApplication::translate("log_display", "MainWindow", 0));
        all_search_but->setText(QApplication::translate("log_display", "\346\237\245\347\234\213\345\205\250\351\203\250\346\227\245\345\277\227", 0));
        exit_but->setText(QApplication::translate("log_display", "\351\200\200\345\207\272", 0));
        label_4->setText(QApplication::translate("log_display", "\350\264\246\345\217\267", 0));
        user_id_search_but->setText(QApplication::translate("log_display", "\346\237\245\346\211\276", 0));
        label_3->setText(QApplication::translate("log_display", "\344\271\246\345\217\267", 0));
        book_id_search_but->setText(QApplication::translate("log_display", "\346\237\245\346\211\276", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_12->setText(QApplication::translate("log_display", "<html><head/><body><p align=\"center\">\346\227\245\345\277\227</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class log_display: public Ui_log_display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_DISPLAY_H
