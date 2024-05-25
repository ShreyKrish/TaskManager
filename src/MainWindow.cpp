// src/MainWindow.cpp
#include "MainWindow.h"
#include <QMenuBar>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    setWindowTitle("Task Manager");
    resize(800, 600);

    QMenuBar *menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    QMenu *fileMenu = menuBar->addMenu("File");
    QAction *exitAction = new QAction("Exit", this);
    connect(exitAction, &QAction::triggered, this, &MainWindow::close);
    fileMenu->addAction(exitAction);

    QMenu *helpMenu = menuBar->addMenu("Help");
    QAction *aboutAction = new QAction("About", this);
    connect(aboutAction, &QAction::triggered, this, []() {
        QMessageBox::about(nullptr, "About Task Manager", "This is a simple Task Manager application.");
    });
    helpMenu->addAction(aboutAction);
}

MainWindow::~MainWindow() {}
