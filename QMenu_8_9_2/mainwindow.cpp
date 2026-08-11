#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenuBar* menubar=new QMenuBar();
    this->setMenuBar(menubar);

    QMenu* menu=new QMenu("菜单");
    menu->setIcon(QIcon(":/tupian/down.png"));
    QAction* action1=new QAction("菜单项1");
    action1->setIcon(QIcon(":/tupian/daxiao.png"));
    QAction* action2=new QAction("菜单项2");
    action2->setIcon(QIcon(":/tupian/doge.png"));
    menubar->addMenu(menu);

    menu->addAction(action1);
    menu->addSeparator();
    menu->addAction(action2);

}

MainWindow::~MainWindow()
{
    delete ui;
}
