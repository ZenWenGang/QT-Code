#ifndef WIDGET_H
#define WIDGET_H
#include<QString>
#include <QWidget>

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

 void handleMysignal(const QString&text);


    signals:
    void mysignal(const QString&text);


    private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

    private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
