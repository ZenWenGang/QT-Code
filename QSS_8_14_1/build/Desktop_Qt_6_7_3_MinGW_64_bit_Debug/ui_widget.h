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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1031, 568);
        Widget->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-image:url(:/cat.jpg);\n"
"}\n"
"\n"
"QLineEdit{\n"
"	color:#405524;\n"
"	background-color:#405361\357\274\233\n"
"	padding:0 5px;\n"
"	border:none;\n"
"	border-radius:10px;\n"
"	font-size:20px;\n"
"}\n"
"\n"
"QCheckBox{\n"
"	color:white;\n"
"	font-size:18px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	font-size:20px;\n"
"	color:white;\n"
"	background-color:#555;\n"
"	border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color:black;\n"
"	background-color:orange;\n"
"}\n"
""));
        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 30, 921, 511));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(250, 60, 421, 361));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(0, 50));
        lineEdit_2->setMaximumSize(QSize(16777215, 50));
        lineEdit_2->setClearButtonEnabled(false);

        verticalLayout->addWidget(lineEdit_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 50));
        lineEdit->setMaximumSize(QSize(16777215, 50));
        lineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEdit);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
