#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_actionAbout_Qt_triggered()
{

}


void MainWindow::on_actionLicense_Info_triggered()
{

}


void MainWindow::on_actionGithub_triggered()
{

}


void MainWindow::on_btnApply_clicked()
{

}


void MainWindow::on_btnHide_clicked()
{

}


void MainWindow::on_btnCancel_clicked()
{

}

