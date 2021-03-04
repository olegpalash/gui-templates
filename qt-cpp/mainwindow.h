#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include "ui_mainwindow.h"

class MainWindow: public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QMainWindow *parent = 0);

private slots:
	// on_[element name]_[event name]

private:
    Ui::MainWindow ui;
};

#endif
