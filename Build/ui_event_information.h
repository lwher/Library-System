/********************************************************************************
** Form generated from reading UI file 'event_information.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT_INFORMATION_H
#define UI_EVENT_INFORMATION_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_event_information
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *log_but;
    QPushButton *modify_but;
    QGridLayout *gridLayout_2;
    QRadioButton *user_name_but;
    QRadioButton *book_name_but;
    QRadioButton *book_id_but;
    QRadioButton *user_id_but;
    QPushButton *book_info_but;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *search_edit;
    QPushButton *search_but;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *book_id_edit;
    QPushButton *book_id_search_but;
    QPushButton *user_info_but;
    QPushButton *exit_but;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *user_id_edit;
    QPushButton *user_id_search_but;
    QPushButton *return_but;
    QPushButton *insert_but;
    QTableWidget *event_table;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_2;

    void setupUi(QMainWindow *event_information)
    {
        if (event_information->objectName().isEmpty())
            event_information->setObjectName(QStringLiteral("event_information"));
        event_information->resize(1189, 755);
        centralwidget = new QWidget(event_information);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(790, 160, 191, 501));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        log_but = new QPushButton(layoutWidget);
        log_but->setObjectName(QStringLiteral("log_but"));

        gridLayout->addWidget(log_but, 11, 0, 1, 1);

        modify_but = new QPushButton(layoutWidget);
        modify_but->setObjectName(QStringLiteral("modify_but"));

        gridLayout->addWidget(modify_but, 11, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        user_name_but = new QRadioButton(layoutWidget);
        user_name_but->setObjectName(QStringLiteral("user_name_but"));

        gridLayout_2->addWidget(user_name_but, 0, 1, 1, 1);

        book_name_but = new QRadioButton(layoutWidget);
        book_name_but->setObjectName(QStringLiteral("book_name_but"));

        gridLayout_2->addWidget(book_name_but, 1, 1, 1, 1);

        book_id_but = new QRadioButton(layoutWidget);
        book_id_but->setObjectName(QStringLiteral("book_id_but"));

        gridLayout_2->addWidget(book_id_but, 1, 0, 1, 1);

        user_id_but = new QRadioButton(layoutWidget);
        user_id_but->setObjectName(QStringLiteral("user_id_but"));

        gridLayout_2->addWidget(user_id_but, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 2);

        book_info_but = new QPushButton(layoutWidget);
        book_info_but->setObjectName(QStringLiteral("book_info_but"));

        gridLayout->addWidget(book_info_but, 12, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        search_edit = new QLineEdit(layoutWidget);
        search_edit->setObjectName(QStringLiteral("search_edit"));

        horizontalLayout_3->addWidget(search_edit);

        search_but = new QPushButton(layoutWidget);
        search_but->setObjectName(QStringLiteral("search_but"));

        horizontalLayout_3->addWidget(search_but);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        book_id_edit = new QLineEdit(layoutWidget);
        book_id_edit->setObjectName(QStringLiteral("book_id_edit"));

        horizontalLayout_6->addWidget(book_id_edit);

        book_id_search_but = new QPushButton(layoutWidget);
        book_id_search_but->setObjectName(QStringLiteral("book_id_search_but"));
        book_id_search_but->setMaximumSize(QSize(51, 16777215));

        horizontalLayout_6->addWidget(book_id_search_but);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 2);

        user_info_but = new QPushButton(layoutWidget);
        user_info_but->setObjectName(QStringLiteral("user_info_but"));

        gridLayout->addWidget(user_info_but, 12, 0, 1, 1);

        exit_but = new QPushButton(layoutWidget);
        exit_but->setObjectName(QStringLiteral("exit_but"));

        gridLayout->addWidget(exit_but, 15, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 2);

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
        user_id_search_but->setMaximumSize(QSize(51, 16777215));

        horizontalLayout_5->addWidget(user_id_search_but);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 2);

        return_but = new QPushButton(layoutWidget);
        return_but->setObjectName(QStringLiteral("return_but"));

        gridLayout->addWidget(return_but, 5, 1, 1, 1);

        insert_but = new QPushButton(layoutWidget);
        insert_but->setObjectName(QStringLiteral("insert_but"));

        gridLayout->addWidget(insert_but, 5, 0, 1, 1);

        event_table = new QTableWidget(centralwidget);
        if (event_table->columnCount() < 6)
            event_table->setColumnCount(6);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        event_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        event_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        event_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        event_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        event_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        event_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        event_table->setObjectName(QStringLiteral("event_table"));
        event_table->setGeometry(QRect(160, 160, 621, 501));
        event_table->setFrameShape(QFrame::StyledPanel);
        event_table->setLineWidth(1);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 80, 891, 611));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/\346\241\206Big.png);"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(490, 90, 161, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-130, 490, 601, 361));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/22332.png);"));
        event_information->setCentralWidget(centralwidget);
        label->raise();
        layoutWidget->raise();
        event_table->raise();
        label_12->raise();
        label_2->raise();

        retranslateUi(event_information);

        QMetaObject::connectSlotsByName(event_information);
    } // setupUi

    void retranslateUi(QMainWindow *event_information)
    {
        event_information->setWindowTitle(QApplication::translate("event_information", "MainWindow", 0));
        log_but->setText(QApplication::translate("event_information", "\346\227\245\345\277\227", 0));
        modify_but->setText(QApplication::translate("event_information", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", 0));
        user_name_but->setText(QApplication::translate("event_information", "\347\224\250\346\210\267\345\220\215", 0));
        book_name_but->setText(QApplication::translate("event_information", "\344\271\246\345\220\215", 0));
        book_id_but->setText(QApplication::translate("event_information", "\344\271\246\345\217\267", 0));
        user_id_but->setText(QApplication::translate("event_information", "\345\270\220\345\217\267", 0));
        book_info_but->setText(QApplication::translate("event_information", "\344\271\246\347\261\215\347\256\241\347\220\206", 0));
        search_but->setText(QApplication::translate("event_information", "\346\220\234\347\264\242", 0));
        label_3->setText(QApplication::translate("event_information", "\344\271\246\345\217\267", 0));
        book_id_search_but->setText(QApplication::translate("event_information", "\346\237\245\347\234\213", 0));
        user_info_but->setText(QApplication::translate("event_information", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        exit_but->setText(QApplication::translate("event_information", "\351\200\200\345\207\272", 0));
        label_4->setText(QApplication::translate("event_information", "\350\264\246\345\217\267", 0));
        user_id_search_but->setText(QApplication::translate("event_information", "\346\237\245\347\234\213", 0));
        return_but->setText(QApplication::translate("event_information", "\345\275\222\350\277\230", 0));
        insert_but->setText(QApplication::translate("event_information", "\345\200\237\351\230\205", 0));
        QTableWidgetItem *___qtablewidgetitem = event_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("event_information", "\345\270\220\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = event_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("event_information", "\347\224\250\346\210\267\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = event_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("event_information", "\344\271\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = event_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("event_information", "\344\271\246\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem4 = event_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("event_information", "\345\200\237\351\230\205\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem5 = event_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("event_information", "\345\275\222\350\277\230\346\227\266\351\227\264", 0));
        label->setText(QString());
        label_12->setText(QApplication::translate("event_information", "\345\200\237\351\230\205\347\256\241\347\220\206", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class event_information: public Ui_event_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT_INFORMATION_H
