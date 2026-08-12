#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QToolBar>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenuBar*menuBar=this->menuBar();
    this->setMenuBar(menuBar);
    //手动创建工具栏
    QToolBar* toolBar=new QToolBar();
    this->addToolBar(toolBar);
    //创建两个菜单项
    QAction* action1=new QAction("保存");
    QAction* action2=new QAction("打开");

    menuBar->addAction(action1);
    menuBar->addAction(action2);

    toolBar->addAction(action1);
    toolBar->addAction(action2);

    connect(action1,&QAction::triggered,this,&MainWindow::handle1);
    connect(action2,&QAction::triggered,this,&MainWindow::handle2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handle1()
{
    qDebug()<<"handle1";
}

void MainWindow::handle2()
{
    qDebug()<<"handle2";
}
