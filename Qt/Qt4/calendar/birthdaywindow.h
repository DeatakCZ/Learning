
#ifndef BIRTHDAYWINDOW_H
#define BIRTHDAYWINDOW_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class BirthdayWindow; }
QT_END_NAMESPACE

class BirthdayWindow : public QMainWindow

{
    Q_OBJECT

public:
    BirthdayWindow(QWidget *parent = nullptr);
    ~BirthdayWindow();

private:
    Ui::BirthdayWindow *ui;
};

#endif // BIRTHDAYWINDOW_H
