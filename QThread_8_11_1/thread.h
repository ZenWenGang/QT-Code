#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QWidget>

class Thread : public QThread
{
    Q_OBJECT
public:
    Thread();
    //重写父类run方法
    void run();
signals:
    void notify();
};

#endif // THREAD_H
