#include "widget.h"
#include "ui_widget.h"
#include<QNetworkDatagram>
#include<QDebug>
//定义两个常量，描述服务器的地址和端口
const QString& SERVER_IP="127.0.0.1";
const quint16 SERVER_PORT=9090;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    socket=new QUdpSocket(this);
    this->setWindowTitle("客户端");
    socket->bind(QHostAddress::Any, 0);
    qDebug()<<"客户端绑定本地端口："<<socket->localPort();
    bool ret =connect(socket,&QUdpSocket::readyRead,this,&Widget::processResponse);
    qDebug() << "connect返回值:" << ret;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    //获取到输入框的内容
    const QString& text=ui->lineEdit->text();
    //构造UDP的请求数据
    QNetworkDatagram requestDatagram(text.toUtf8(),QHostAddress(SERVER_IP),SERVER_PORT);
    //发送请求数据
    socket->writeDatagram(requestDatagram);
    //发送的请求也添加到列表框中
    ui->listWidget->addItem("客户端说:"+text);
    //把输入框的内容也清空一下
    ui->lineEdit->setText("");
}

void Widget::processResponse()
{
    //通过这个函数来处理收到的响应
    qDebug()<<"processResponse已执行！！！";
    //读取响应数据
    QNetworkDatagram responseDatagram=socket->receiveDatagram();
    QString response = QString::fromUtf8(responseDatagram.data());

    //把响应数据显示到屏幕上
    ui->listWidget->addItem("服务器说:"+response);
}

