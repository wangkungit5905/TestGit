#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Hello git");
    //添加注释
    //验证跳过暂存的提交
    //从git上clone后，加入的注释信息
}

MainWindow::~MainWindow()
{
    delete ui;
}
