/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAddPerson;
    QAction *actionEditPerson;
    QAction *actionExitApp;
    QAction *actionViewToolbar;
    QAction *actionViewStatusBar;
    QAction *actionAboutQtHelp;
    QAction *actionAboutHelp;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuOsoby;
    QMenu *menuNapoveda;
    QMenu *menuZobrazit;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(640, 480);
        QPalette palette;
        QBrush brush(QColor(26, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(76, 76, 76, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(116, 116, 116, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(62, 62, 62, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(255, 0, 251, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush5);
        QBrush brush6(QColor(0, 135, 131, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        QBrush brush7(QColor(255, 0, 242, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        QBrush brush8(QColor(61, 61, 61, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush8);
        QBrush brush9(QColor(40, 40, 40, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush10(QColor(255, 247, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
        QBrush brush11(QColor(50, 49, 48, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        QBrush brush12(QColor(67, 67, 58, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        QBrush brush13(QColor(154, 154, 154, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        QBrush brush14(QColor(240, 240, 240, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        QBrush brush15(QColor(255, 255, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush15);
        QBrush brush16(QColor(227, 227, 227, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush16);
        QBrush brush17(QColor(160, 160, 160, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush17);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush4);
        QBrush brush18(QColor(245, 245, 245, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        QBrush brush19(QColor(255, 255, 220, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush19);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush19);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/mainIcon"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAddPerson = new QAction(MainWindow);
        actionAddPerson->setObjectName("actionAddPerson");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/addPerson"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddPerson->setIcon(icon1);
        actionEditPerson = new QAction(MainWindow);
        actionEditPerson->setObjectName("actionEditPerson");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/editPerson"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditPerson->setIcon(icon2);
        actionExitApp = new QAction(MainWindow);
        actionExitApp->setObjectName("actionExitApp");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/exit"), QSize(), QIcon::Normal, QIcon::Off);
        actionExitApp->setIcon(icon3);
        actionViewToolbar = new QAction(MainWindow);
        actionViewToolbar->setObjectName("actionViewToolbar");
        actionViewToolbar->setCheckable(true);
        actionViewToolbar->setChecked(true);
        actionViewStatusBar = new QAction(MainWindow);
        actionViewStatusBar->setObjectName("actionViewStatusBar");
        actionViewStatusBar->setCheckable(true);
        actionViewStatusBar->setChecked(true);
        actionAboutQtHelp = new QAction(MainWindow);
        actionAboutQtHelp->setObjectName("actionAboutQtHelp");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/qt"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQtHelp->setIcon(icon4);
        actionAboutHelp = new QAction(MainWindow);
        actionAboutHelp->setObjectName("actionAboutHelp");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/about"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutHelp->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menuOsoby = new QMenu(menubar);
        menuOsoby->setObjectName("menuOsoby");
        menuNapoveda = new QMenu(menubar);
        menuNapoveda->setObjectName("menuNapoveda");
        menuZobrazit = new QMenu(menubar);
        menuZobrazit->setObjectName("menuZobrazit");
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuOsoby->menuAction());
        menubar->addAction(menuZobrazit->menuAction());
        menubar->addAction(menuNapoveda->menuAction());
        menuOsoby->addAction(actionAddPerson);
        menuOsoby->addAction(actionEditPerson);
        menuOsoby->addSeparator();
        menuOsoby->addAction(actionExitApp);
        menuNapoveda->addAction(actionAboutQtHelp);
        menuNapoveda->addAction(actionAboutHelp);
        menuZobrazit->addAction(actionViewToolbar);
        menuZobrazit->addAction(actionViewStatusBar);
        toolBar->addAction(actionAddPerson);
        toolBar->addAction(actionEditPerson);
        toolBar->addSeparator();
        toolBar->addAction(actionAboutQtHelp);
        toolBar->addAction(actionAboutHelp);
        toolBar->addSeparator();
        toolBar->addAction(actionExitApp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Narozeniny", nullptr));
        actionAddPerson->setText(QCoreApplication::translate("MainWindow", "Pridat novou", nullptr));
#if QT_CONFIG(statustip)
        actionAddPerson->setStatusTip(QCoreApplication::translate("MainWindow", "Vytvori novou osovu nebo udalost", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionAddPerson->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEditPerson->setText(QCoreApplication::translate("MainWindow", "Upravit", nullptr));
#if QT_CONFIG(statustip)
        actionEditPerson->setStatusTip(QCoreApplication::translate("MainWindow", "Upravi existujici osovu nebo udalost", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionEditPerson->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExitApp->setText(QCoreApplication::translate("MainWindow", "Ukoncit", nullptr));
#if QT_CONFIG(statustip)
        actionExitApp->setStatusTip(QCoreApplication::translate("MainWindow", "Ulozi a ukonci program", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionExitApp->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewToolbar->setText(QCoreApplication::translate("MainWindow", "Panel nastroju", nullptr));
#if QT_CONFIG(statustip)
        actionViewToolbar->setStatusTip(QCoreApplication::translate("MainWindow", "Prepina skryvani nastrojoveho radku", nullptr));
#endif // QT_CONFIG(statustip)
        actionViewStatusBar->setText(QCoreApplication::translate("MainWindow", "Stavovy radek", nullptr));
#if QT_CONFIG(statustip)
        actionViewStatusBar->setStatusTip(QCoreApplication::translate("MainWindow", "Prepina zobrazovani statusoveho radku", nullptr));
#endif // QT_CONFIG(statustip)
        actionAboutQtHelp->setText(QCoreApplication::translate("MainWindow", "O Qt", nullptr));
#if QT_CONFIG(statustip)
        actionAboutQtHelp->setStatusTip(QCoreApplication::translate("MainWindow", "Zobrazi napovedu o frameworku Qt.", nullptr));
#endif // QT_CONFIG(statustip)
        actionAboutHelp->setText(QCoreApplication::translate("MainWindow", "O programu", nullptr));
#if QT_CONFIG(tooltip)
        actionAboutHelp->setToolTip(QCoreApplication::translate("MainWindow", "O programu", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionAboutHelp->setStatusTip(QCoreApplication::translate("MainWindow", "Zobrazit napovedu o programu", nullptr));
#endif // QT_CONFIG(statustip)
        menuOsoby->setTitle(QCoreApplication::translate("MainWindow", "Osoby", nullptr));
        menuNapoveda->setTitle(QCoreApplication::translate("MainWindow", "Napoveda", nullptr));
        menuZobrazit->setTitle(QCoreApplication::translate("MainWindow", "Zobrazit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
