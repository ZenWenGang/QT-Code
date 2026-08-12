#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDockWidget>
#include<QPushButton>
#include<QVBoxLayout>
#include<QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //给主窗口添加一个子窗口
    QDockWidget* dockWidget=new QDockWidget();
    //使用addDockWidget方法，把浮动窗口加入到子窗口中
    this->addDockWidget(Qt::LeftDockWidgetArea,dockWidget);

    dockWidget->setWindowTitle("这是浮动窗口");
    //给浮动窗口添加一些控件
    QWidget* container=new QWidget();
    dockWidget->setWidget(container);
    //创建布局管理器，将控件设置进去
    QVBoxLayout* layout=new QVBoxLayout();
    container->setLayout(layout);
    QLabel* label=new QLabel("这是一个QLabel");
    QPushButton* pushBUtton=new QPushButton("按钮");
    layout->addWidget(label);
    layout->addWidget(pushBUtton);
    //设置浮动窗口允许停靠的位置
    dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::TopDockWidgetArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}
