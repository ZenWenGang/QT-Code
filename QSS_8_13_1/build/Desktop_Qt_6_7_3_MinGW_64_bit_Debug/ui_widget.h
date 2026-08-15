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
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 200, 221, 91));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    font-size:20pt;\n"
"    border:3px solid rgb(255,211,78);\n"
"    border-radius:10px;\n"
"    background-color:rgb(70, 14, 255);\n"
"    color:rgb(241, 172, 255);\n"
"    /*\345\205\263\351\224\256\357\274\201\345\212\240\344\270\212\350\277\231\344\270\200\345\217\245\357\274\214\345\205\263\351\227\255\347\263\273\347\273\237\345\216\237\347\224\237\346\214\211\351\222\256\347\273\230\345\210\266*/\n"
"    qproperty-flat:true;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color:rgb(255, 251, 138);\n"
"}\n"
""));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\214\211\351\222\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
