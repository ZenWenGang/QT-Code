#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    //使用addTab方法来创建新的标签页
    //先获取标签页的数量
    int count=ui->tabWidget->count();
    QWidget* w=new QWidget();
    //参数1 指定一个QWidget
    //参数2 指定这个标签页堆顶标题，此处标题叫做Tab+数字
    ui->tabWidget->addTab(w,QString("Tab")+QString::number(count+1));
    //添加一个QLabel显示内容
    QLabel* label=new QLabel(w);
    label->setText(QString("标签页")+QString::number(count+1));
    label->resize(100,50);
    //设置自动选中创建好的标签页
    ui->tabWidget->setCurrentIndex(count);
}


void Widget::on_pushButton_2_clicked()
{
    //获取到当前选中的标签页下标
    int index=ui->tabWidget->currentIndex();
    //删除标签页
    ui->tabWidget->removeTab(index);
}


void Widget::on_tabWidget_currentChanged(int index)
{
    qDebug()<<"当前选中的标签页："<<index;
}

