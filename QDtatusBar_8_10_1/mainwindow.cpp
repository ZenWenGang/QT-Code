#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include<QPushButton>
#include<QProgressBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建状态栏（存在就获取，不存在就创建）
    QStatusBar* statusBar=this->statusBar();
    this->setStatusBar(statusBar);

    //给状态栏添加子控件
    QLabel* Label=new QLabel("这是一个QLabel");
    statusBar->addWidget(Label);

    QProgressBar* progressBar=new QProgressBar();
    progressBar->setRange(0,100);
    progressBar->setValue(50);
    statusBar->addWidget(progressBar);

    QPushButton* pushButton=new QPushButton("按钮");
    statusBar->addPermanentWidget(pushButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}
