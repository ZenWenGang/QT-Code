#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    myButton=new QPushButton(this);
    myButton->setText("Hello QT!");
    connect(myButton,&QPushButton::clicked,this,&Widget::handleclick);
    myButton->move(200,300);
    this->move(300,0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleclick()
{
    if(myButton->text()==QString("Hello QT!"))
    {
        myButton->setText("Hello World!");
    }
    else
    {
        myButton->setText("Hello QT!");
    }
}