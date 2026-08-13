#include "thread.h"

Thread::Thread() {}

void Thread::run()
{
    //当每到一秒钟的时候，通过信号槽来通知线程，负责更新界面的内容
    for(int i=0;i<10;i++)
    {
        sleep(1);
        //发送一个信号通知线程
        emit notify();
    }
}
