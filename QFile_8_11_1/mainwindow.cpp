#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFont>
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("简单的记事本");
    //获取菜单栏
    QMenuBar* menubar=this->menuBar();
    QMenu* menu=new QMenu("文件");
    menubar->addMenu(menu);
    //添加菜单项
    QAction* action1=new QAction("打开");
    QAction* action2=new QAction("保存");
    menu->addAction(action1);
    menu->addAction(action2);
    //指定一个输入框
    edit=new QPlainTextEdit();
    QFont font;
    font.setPixelSize(20);
    edit->setFont(font);
    this->setCentralWidget(edit);
    //连接QAction的信号槽
    connect(action1,&QAction::triggered,this,&MainWindow::handleAction1);
    connect(action2,&QAction::triggered,this,&MainWindow::handleAction2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleAction1()
{
    //先弹出"打开文件"对话框,让用户选择打开哪个文件
    QString path=QFileDialog::getOpenFileName(this);
    //把文件名显示到状体栏里
    QStatusBar* statusBar=this->statusBar();
    statusBar->showMessage(path);
    //根据用户选择的路径，构造一个QFile对象，并打开文件
    QFile file(path);
    bool ret=file.open(QIODevice::ReadOnly);
    if(!ret)
    {
        statusBar->showMessage(path+"打开失败");
        return ;
    }
    //读取文件
    QString text=file.readAll();
    //关闭文件
    file.close();
    //将读取到的内容设置到输入框中
    edit->setPlainText(text);
}

void MainWindow::handleAction2()
{
    //先弹出"保存文件"对话框
    QString path=QFileDialog::getSaveFileName(this);
    //在状态栏中显示这个文件名
    QStatusBar* statusBar=this->statusBar();
    statusBar->showMessage(path);
    //根据用户选择的路径，构造一个QFile对象，并打开文件
    QFile file(path);
    bool ret=file.open(QFile::WriteOnly);
    if(!ret)
    {
        statusBar->showMessage(path+"打开失败");
    }
    //写文件
    const QString& text=edit->toPlainText();
    file.write(text.toUtf8());
    //关闭文件
    file.close();
}
