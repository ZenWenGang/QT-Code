#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //创建对话框
    QMessageBox* messageBox=new QMessageBox(this);
    messageBox->setWindowTitle("对话框窗口标题");
    messageBox->setText("对话框文本");
    messageBox->setIcon(QMessageBox::Warning);//自带的图标
    messageBox->setStandardButtons(QMessageBox::Ok|QMessageBox::Save|QMessageBox::Cancel);
    messageBox->exec();
    messageBox->setAttribute(Qt::WA_DeleteOnClose);
}

