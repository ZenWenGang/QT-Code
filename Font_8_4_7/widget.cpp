#include "widget.h"
#include "ui_widget.h"
#include<QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel * label=new QLabel(this);
    label->setText("这是一段文字！");
    QFont font;
    font.setFamily("仿宋");
    font.setPixelSize(30);
    font.setBold(true);
    font.setUnderline(true);
    font.setStrikeOut(true);

    label->setFont(font);
}

Widget::~Widget()
{
    delete ui;
}
