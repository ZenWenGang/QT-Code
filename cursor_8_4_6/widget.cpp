#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap pixmap(":/backetboll.png");
    pixmap=pixmap.scaled(100,100);
    QCursor cursor(pixmap,10,10);
    this->setCursor(cursor);
}

Widget::~Widget()
{
    delete ui;
}
