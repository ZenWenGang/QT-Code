#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //新建菜单栏
    QMenuBar* menuBar=new QMenuBar();
    this->setMenuBar(menuBar);
    //新建3个菜单
    QMenu* menu1=new QMenu("文件");
    QMenu* menu2=new QMenu("新建");
    QMenu* menu3=new QMenu("视图");
    //菜单添加到菜单栏中
    menuBar->addMenu(menu1);
    menuBar->addMenu(menu2);
    menuBar->addMenu(menu3);
    //给菜单添加菜单项
    QAction* action1=new QAction("新建");
    QAction* action2=new QAction("保存");
    QAction* action3=new QAction("另存为");
    QAction* action4=new QAction("打开");
    QAction* action5=new QAction("退出");
    //将菜单项添加到菜单中
    menu1->addAction(action1);
    menu1->addAction(action2);
    menu1->addAction(action3);
    menu1->addAction(action4);
    menu1->addAction(action5);
    //给Action添加信号槽(要用triggered触发)
    connect(action1,&QAction::triggered,this,&MainWindow::handle);
    connect(action5,&QAction::triggered,this,&MainWindow::close);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handle()
{
    qDebug()<<"执行新建操作";
}
