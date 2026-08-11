#include "widget.h"
#include "ui_widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建按钮
    QPushButton* button1=new QPushButton("按钮1");
    QPushButton* button2=new QPushButton("按钮2");
    QPushButton* button3=new QPushButton("按钮3");
    QPushButton* button4=new QPushButton("按钮4");
    //创建垂直布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    this->setLayout(vlayout);
    //添加两个按钮进去
    vlayout->addWidget(button1);
    vlayout->addWidget(button2);

    //创建水平布局管理器
    QHBoxLayout* hlayout=new QHBoxLayout();
    //添加两个按钮进去
    hlayout->addWidget(button3);
    hlayout->addWidget(button4);

    //将水平布局管理器添加到垂直布局管理器中
    vlayout->addLayout(hlayout);

}

Widget::~Widget()
{
    delete ui;
}
