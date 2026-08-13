#include "label.h"
#include<QDebug>
#include<QMouseEvent>
Label::Label(QWidget* parent):QLabel(parent)
{

}

void Label::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        qDebug()<<"按下左键";
    }
    else if(event->button()==Qt::RightButton)
    {
        qDebug()<<"按下右键";
    }

    QPointF pos = event->position();
    qDebug() << pos.x() << "," << pos.y();
}

void Label::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        qDebug()<<"松开左键";
    }
    else  if(event->button()==Qt::RightButton)
    {
        qDebug()<<"松开右键";
    }
}

void Label::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        qDebug()<<"双击左键";
    }
    else  if(event->button()==Qt::RightButton)
    {
        qDebug()<<"双击右键";
    }
}
