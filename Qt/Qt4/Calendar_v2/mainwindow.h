
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAddPerson_triggered();

    void on_actionEditPerson_triggered();

    void on_actionExitApp_triggered();

    void on_actionViewToolbar_triggered();

    void on_actionViewStatusBar_triggered();

    void on_actionAboutQtHelp_triggered();

    void on_actionAboutHelp_triggered();

private:
    Ui::MainWindow *ui;
    const QString WND_TITLE = "Narozeniny";
    void notImplemented();
};

#endif // MAINWINDOW_H
