#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QString>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit_name->setPlaceholderText("请输入姓名:");
    ui->lineEdit_name->setClearButtonEnabled(true);

    ui->lineEdit_password->setPlaceholderText("请输入密码:");
    ui->lineEdit_password->setClearButtonEnabled(true);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);//密码模式

    ui->lineEdit_phone->setPlaceholderText("请输入手机号:");
    ui->lineEdit_phone->setClearButtonEnabled(true);
    ui->lineEdit_phone->setInputMask("000-0000-0000");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString gender=ui->radioButton_male->isChecked()?"男":"女";
    qDebug() <<"姓名:"<<ui->lineEdit_name->text()
             <<"密码:"<<ui->lineEdit_password->text()
             <<"性别:"<<gender
             <<"电话:"<<ui->lineEdit_phone->text();
}

