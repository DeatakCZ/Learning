
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>


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


void MainWindow::notImplemented()
{
    QMessageBox msg;
    msg.information(this, WND_TITLE, "Tato funkce prozatím není v provozu,\nale pracuje se na tom.");
}

void MainWindow::on_actionAddPerson_triggered()
{
    notImplemented();
}


void MainWindow::on_actionEditPerson_triggered()
{
    notImplemented();
}


void MainWindow::on_actionExitApp_triggered()
{
    qApp->quit();
}


void MainWindow::on_actionViewToolbar_triggered()
{
    if(ui->actionViewToolbar->isChecked())
    {
        ui->toolBar->show();
    }
    else
    {
        ui->toolBar->hide();
    }
}


void MainWindow::on_actionViewStatusBar_triggered()
{
    if(ui->actionViewStatusBar->isChecked())
    {
        ui->statusBar->show();
    }
    else
    {
        ui->statusBar->hide();
    }
}


void MainWindow::on_actionAboutQtHelp_triggered()
{
    QMessageBox msg;
    msg.aboutQt(this, WND_TITLE);
}


void MainWindow::on_actionAboutHelp_triggered()
{
    QMessageBox msg;
    msg.about(this, WND_TITLE, "Ahoj,\numim pripominam vyznamne dny\nNarozeniny,svatby, vyroci, apod.\n Neni zac.\n Tomik");
}

