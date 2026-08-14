#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTcpServer>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;
    void processConnection();
private:
    Ui::Widget *ui;
    QTcpServer* tcpServer;
    QString process(const QString request);
};
#endif // WIDGET_H
