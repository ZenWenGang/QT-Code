#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QPlainTextEdit>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    void handleAction1();
    void handleAction2();

private:
    Ui::MainWindow *ui;
    QPlainTextEdit* edit;
};
#endif // MAINWINDOW_H
