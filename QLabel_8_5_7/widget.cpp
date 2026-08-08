#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QResizeEvent>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QRect windowRect=this->geometry();
    ui->label->setGeometry(0,0,windowRect.width(),windowRect.height());

    QPixmap pixmap(":/daxiao.png");
    ui->label->setPixmap(pixmap);
    //启动自动拉伸，填充整个窗口
    ui->label->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    qDebug()<<event;
    ui->label->setGeometry(0,0,event->size().width(),event->size().height());
}
