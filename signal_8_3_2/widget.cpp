#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,&Widget::mysignal,this,&Widget::handleMysignal);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{//处理按下按钮之后的操作：发送信号
    emit mysignal("标题1");
}
void Widget::handleMysignal(const QString&text)
{//收到信号，执行：
    this->setWindowTitle(text);
}

void Widget::on_pushButton_2_clicked()
{
    emit mysignal("标题2");
}

