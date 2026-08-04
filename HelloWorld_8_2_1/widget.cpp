#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect (ui->pushButton,&QPushButton::clicked,this,&Widget::handleClick);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleClick()
{
    if(ui->pushButton->text()==QString("Hello QT!"))
    {
        ui->pushButton->setText("Hello world!");
    }
    else
    {
        ui->pushButton->setText("Hello QT!");
    }
   // if(ui->PushBUttton)
}
