#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("请输入要插入的列名:");

    ui->tableWidget->insertRow(0);
    ui->tableWidget->insertRow(1);
    ui->tableWidget->insertRow(2);

    ui->tableWidget->insertColumn(0);
    ui->tableWidget->insertColumn(1);
    ui->tableWidget->insertColumn(2);

    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("学号"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("姓名"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("年龄"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_insert_row_clicked()
{
    //获取当前行数
    int rowCount=ui->tableWidget->rowCount();
    //在最后一行之后插入新行
    //注意此处的参数是下标，表示你新增之后的这样一行是第几行
    ui->tableWidget->insertRow(rowCount);
}


void Widget::on_pushButton_delete_row_clicked()
{
    //获取选中的行号
    int curRow=ui->tableWidget->currentRow();
    //删除该行
    ui->tableWidget->removeRow(curRow);
}


void Widget::on_pushButton_insert_column_clicked()
{
    //获取当前列数
    int columnCount=ui->tableWidget->columnCount();
    //在最后一列后插入新列
    ui->tableWidget->insertColumn(columnCount);
    //设置列名(在输入框中获取)
    const QString& text=ui->lineEdit->text();
    ui->tableWidget->setHorizontalHeaderItem(columnCount,new QTableWidgetItem(text));
}


void Widget::on_pushButton_delete_column_clicked()
{
    //获取选中的列号
    int curCol=ui->tableWidget->currentColumn();
    //删除该列
    ui->tableWidget->removeColumn(curCol);
}

