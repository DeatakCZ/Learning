
#include "birthdaywindow.h"
#include "ui_birthdaywindow.h"


BirthdayWindow::BirthdayWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BirthdayWindow)
{
    ui->setupUi(this);
}

BirthdayWindow::~BirthdayWindow()
{
    delete ui;
}


