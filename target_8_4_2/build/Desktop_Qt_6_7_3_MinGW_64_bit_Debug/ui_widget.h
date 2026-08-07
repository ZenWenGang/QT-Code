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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_target;
    QPushButton *pushButton_up;
    QPushButton *pushButton_down;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pushButton_target = new QPushButton(Widget);
        pushButton_target->setObjectName("pushButton_target");
        pushButton_target->setGeometry(QRect(310, 100, 93, 28));
        pushButton_up = new QPushButton(Widget);
        pushButton_up->setObjectName("pushButton_up");
        pushButton_up->setGeometry(QRect(310, 260, 71, 61));
        pushButton_down = new QPushButton(Widget);
        pushButton_down->setObjectName("pushButton_down");
        pushButton_down->setGeometry(QRect(310, 380, 71, 61));
        pushButton_left = new QPushButton(Widget);
        pushButton_left->setObjectName("pushButton_left");
        pushButton_left->setGeometry(QRect(240, 320, 71, 61));
        pushButton_right = new QPushButton(Widget);
        pushButton_right->setObjectName("pushButton_right");
        pushButton_right->setGeometry(QRect(380, 320, 71, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_target->setText(QCoreApplication::translate("Widget", "target", nullptr));
        pushButton_up->setText(QCoreApplication::translate("Widget", "up", nullptr));
        pushButton_down->setText(QCoreApplication::translate("Widget", "down", nullptr));
        pushButton_left->setText(QCoreApplication::translate("Widget", "left", nullptr));
        pushButton_right->setText(QCoreApplication::translate("Widget", "right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
