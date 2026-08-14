#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("客户端");
    //创建socket对象的实例
    socket=new QTcpSocket(this);
    //和服务器建立连接
    socket->connectToHost("127.0.0.1",9090);
    //连接信号槽处理响应
    connect(socket,&QTcpSocket::readyRead,this,[=](){
        //读取响应内容
        QString response=socket->readAll();
        //把响应内容显示到界面上
        ui->listWidget->addItem("服务器说:"+response);
    });
    bool ret=socket->waitForConnected();
    if(!ret)
    {
        QMessageBox::critical(this,"连接服务器出错",socket->errorString());
        exit(1);
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    //获取到输入框的内容
    const QString& text=ui->lineEdit->text();
    //发送数据给服务器
    socket->write(text.toUtf8());
    //把发送的消息显示到屏幕上
    ui->listWidget->addItem("客户端说:"+text);
    //清空输入框的内容
    ui->lineEdit->setText("");
}

