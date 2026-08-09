#include "widget.h"
#include "ui_widget.h"
#include <QRegularExpressionValidator>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //基于正则表达式完成验证
    QRegularExpression regExp("^1\\d{10}$");
    ui->lineEdit->setValidator(new QRegularExpressionValidator(regExp,this));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_lineEdit_textEdited(const QString &text)
{
    QString content=text;
    int pos=0;
    if(ui->lineEdit->validator()->validate(content,pos)==QValidator::Acceptable)
    {
        ui->pushButton->setEnabled(true);
    }
    else
    {
        ui->pushButton->setEnabled(false);
    }
}

