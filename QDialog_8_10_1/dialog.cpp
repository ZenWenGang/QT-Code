#include "dialog.h"
#include<QPushButton>
#include<QLabel>
#include<QVBoxLayout>
Dialog::Dialog()
{
    //创建控件加入到dialog中（以Dialog为父窗口）
    QVBoxLayout* layout=new QVBoxLayout();
    this->setLayout(layout);
    //都是以this（Dialog）为父窗口
    QLabel* label=new QLabel("这是一个对话框",this);
    QPushButton* pushButton=new QPushButton("关闭",this);
    layout->addWidget(label);
    layout->addWidget(pushButton);
    connect(pushButton,&QPushButton::clicked,this,&Dialog::handle);
}

void Dialog::handle()
{
    this->close();
}
