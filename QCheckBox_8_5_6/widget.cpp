#include "widget.h"
#include "ui_widget.h"

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
    QString result="你今天的安排是:";
    if(ui->checkBox_studay->isChecked())
    {
        result+=ui->checkBox_studay->text()+" ";
    }
    if(ui->checkBox_playgame->isChecked())
    {
        result+=ui->checkBox_playgame->text()+" ";
    }
    if(ui->checkBox_work->isChecked())
    {
        result+=ui->checkBox_work->text()+" ";
    }
    ui->label->setText(result);
}

