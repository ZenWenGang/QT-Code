#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QTcpSocket>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("服务器");
    //创建QTcpServer实例
    tcpServer=new QTcpServer(this);
    //通过信号槽指定如何连接
    connect(tcpServer,&QTcpServer::newConnection,this,&Widget::processConnection);
    //监听并绑定
    bool ret=tcpServer->listen(QHostAddress::Any,9090);
    if(!ret)
    {
        QMessageBox::critical(this,"服务器启动失败！",tcpServer->errorString());
        exit(1);
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::processConnection()
{
    //通过tcpServer拿到一个socket对象，通过这个对象来和客户端进行通信
    QTcpSocket* clientSocket=tcpServer->nextPendingConnection();
    QString log="["+clientSocket->peerAddress().toString()+":"+QString::number(clientSocket->peerPort())+"]客户端上线!";
    ui->listWidget->addItem(log);
    //通过信号槽来处理
    connect(clientSocket,&QTcpSocket::readyRead,this,[=](){
    //读出请求数据
    QString request=clientSocket->readAll();
    //根据请求处理响应
    const QString& response=process(request);
    //把响应写回到客户端
    clientSocket->write(response.toUtf8());
    //把上述信息记录到日志中
    QString log="["+clientSocket->peerAddress().toString()+":"+QString::number(clientSocket->peerPort())+"]"
                  +"req"+request+"resp:"+response;
    ui->listWidget->addItem(log);
    });
    //通过信号槽来处理客户端断开连接的情况
    connect(clientSocket,&QTcpSocket::disconnected,this,[=](){
        QString log="["+clientSocket->peerAddress().toString()+":"+QString::number(clientSocket->peerPort())+"]客户端下线!";
        ui->listWidget->addItem(log);
        //手动释放clientSocket
        clientSocket->deleteLater();
    });
}

QString Widget::process(const QString request)
{
    return request;
}
