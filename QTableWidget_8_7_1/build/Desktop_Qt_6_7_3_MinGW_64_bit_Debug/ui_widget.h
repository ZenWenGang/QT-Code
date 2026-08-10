/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_insert_row;
    QPushButton *pushButton_delete_row;
    QPushButton *pushButton_insert_column;
    QPushButton *pushButton_delete_column;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pushButton_insert_row = new QPushButton(Widget);
        pushButton_insert_row->setObjectName("pushButton_insert_row");
        pushButton_insert_row->setGeometry(QRect(120, 310, 93, 28));
        pushButton_delete_row = new QPushButton(Widget);
        pushButton_delete_row->setObjectName("pushButton_delete_row");
        pushButton_delete_row->setGeometry(QRect(120, 380, 93, 28));
        pushButton_insert_column = new QPushButton(Widget);
        pushButton_insert_column->setObjectName("pushButton_insert_column");
        pushButton_insert_column->setGeometry(QRect(330, 310, 93, 28));
        pushButton_delete_column = new QPushButton(Widget);
        pushButton_delete_column->setObjectName("pushButton_delete_column");
        pushButton_delete_column->setGeometry(QRect(330, 380, 93, 28));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(500, 310, 113, 25));
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 30, 411, 251));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_insert_row->setText(QCoreApplication::translate("Widget", "\346\226\260\345\242\236\344\270\200\350\241\214", nullptr));
        pushButton_delete_row->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\344\270\200\350\241\214", nullptr));
        pushButton_insert_column->setText(QCoreApplication::translate("Widget", "\346\226\260\345\242\236\344\270\200\345\210\227", nullptr));
        pushButton_delete_column->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\344\270\200\345\210\227", nullptr));
        lineEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
