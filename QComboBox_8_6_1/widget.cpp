#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->lineEdit->setText("请选择搭配:");

    ui->comboBox->addItem("香辣鸡腿堡");
    ui->comboBox->addItem("板烧鸡腿堡");
    ui->comboBox->addItem("藤椒鸡腿堡");

    ui->comboBox_2->addItem("薯条");
    ui->comboBox_2->addItem("鸡块");
    ui->comboBox_2->addItem("薯丸");

    ui->comboBox_3->addItem("可乐");
    ui->comboBox_3->addItem("雪碧");
    ui->comboBox_3->addItem("橙汁");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString s1=ui->comboBox->currentText();
    QString s2=ui->comboBox_2->currentText();
    QString s3=ui->comboBox_3->currentText();
    ui->lineEdit->setText(s1+" "+s2+" "+s3);
}

