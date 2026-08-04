#include "widget.h"
#include "ui_widget.h"
#include<QLineEdit>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QLineEdit* label=new QLineEdit(this);
    label->setText("hello world!!!");
}

Widget::~Widget()
{
    delete ui;
}
