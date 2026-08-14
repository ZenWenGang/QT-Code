#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QNetworkDatagram>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建出这个对象
    socket=new QUdpSocket(this);
    //设置窗口标题
    this->setWindowTitle("服务器");
    //先连接信号槽，后绑定端口号
    connect(socket,&QUdpSocket::readyRead,this,&Widget::processRequest);
    bool ret=socket->bind(QHostAddress::Any,9090);
    if(!ret)
    {
        //绑定失败
        QMessageBox::critical(this,"服务器启动出错",socket->errorString());
        return;
    }
}

Widget::~Widget()
{
    delete ui;
}
//处理请求
void Widget::processRequest()
{
    //读取请求并相应
    const QNetworkDatagram& requestDatagram=socket->receiveDatagram();
    QString request=requestDatagram.data();
    //根据请求响应
    const QString&response=process(request);
    //把响应写回客户端
    QString log="["+requestDatagram.senderAddress().toString()+":"+QString::number(requestDatagram.senderPort())
                  +"]req:"+request+",resp:"+response;
    ui->listWidget->addItem(log);
}

QString Widget::process(const QString &request)
{
    return request;
}
