#include "label.h"
#include<QDebug>
label::label(QWidget* parent):QLabel(parent)
{

}

void label::enterEvent(QEvent *event)
{
    (void) event;
    qDebug()<<"enterEvent";
}

void label::leaveEvent(QEvent *event)
{
    (void) event;
    qDebug()<<"leaveEvent";
}
