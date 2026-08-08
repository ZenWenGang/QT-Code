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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QCheckBox *checkBox_studay;
    QCheckBox *checkBox_playgame;
    QCheckBox *checkBox_work;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 110, 311, 31));
        checkBox_studay = new QCheckBox(Widget);
        checkBox_studay->setObjectName("checkBox_studay");
        checkBox_studay->setGeometry(QRect(250, 190, 98, 23));
        checkBox_playgame = new QCheckBox(Widget);
        checkBox_playgame->setObjectName("checkBox_playgame");
        checkBox_playgame->setGeometry(QRect(250, 250, 98, 23));
        checkBox_work = new QCheckBox(Widget);
        checkBox_work->setObjectName("checkBox_work");
        checkBox_work->setGeometry(QRect(250, 310, 98, 23));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 390, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\275\240\344\273\212\345\244\251\347\232\204\345\256\211\346\216\222\346\230\257\357\274\232", nullptr));
        checkBox_studay->setText(QCoreApplication::translate("Widget", "\345\255\246\344\271\240", nullptr));
        checkBox_playgame->setText(QCoreApplication::translate("Widget", "\347\216\251\346\270\270\346\210\217", nullptr));
        checkBox_work->setText(QCoreApplication::translate("Widget", "\346\211\223\345\267\245", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
