#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QIcon icon(":/1156.jpg_wh860.jpg");
    this->setWindowIcon(icon);
}

Widget::~Widget()
{
    delete ui;
}
