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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *pushButton_agree;
    QPushButton *pushButton_reject;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 150, 261, 31));
        pushButton_agree = new QPushButton(Widget);
        pushButton_agree->setObjectName("pushButton_agree");
        pushButton_agree->setGeometry(QRect(200, 310, 93, 28));
        pushButton_reject = new QPushButton(Widget);
        pushButton_reject->setObjectName("pushButton_reject");
        pushButton_reject->setGeometry(QRect(450, 310, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\245\263\347\245\236\357\274\214\345\245\263\347\245\236\345\201\232\346\210\221\345\245\263\347\245\250\345\245\275\344\270\215\345\245\275\357\274\237", nullptr));
        pushButton_agree->setText(QCoreApplication::translate("Widget", "\346\254\243\347\204\266\345\220\214\346\204\217", nullptr));
        pushButton_reject->setText(QCoreApplication::translate("Widget", "\346\256\213\345\277\215\346\213\222\347\273\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
