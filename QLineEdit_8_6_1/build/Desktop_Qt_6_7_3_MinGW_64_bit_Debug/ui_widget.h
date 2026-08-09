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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_phone;
    QPushButton *pushButton;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_fmale;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 130, 69, 20));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 250, 69, 20));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 310, 69, 20));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 190, 69, 20));
        lineEdit_name = new QLineEdit(Widget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(320, 130, 161, 31));
        lineEdit_password = new QLineEdit(Widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(320, 180, 161, 31));
        lineEdit_phone = new QLineEdit(Widget);
        lineEdit_phone->setObjectName("lineEdit_phone");
        lineEdit_phone->setGeometry(QRect(320, 310, 161, 31));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 390, 93, 28));
        radioButton_male = new QRadioButton(Widget);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(330, 250, 118, 23));
        radioButton_fmale = new QRadioButton(Widget);
        radioButton_fmale->setObjectName("radioButton_fmale");
        radioButton_fmale->setGeometry(QRect(420, 250, 118, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\247\223\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        radioButton_male->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        radioButton_fmale->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
