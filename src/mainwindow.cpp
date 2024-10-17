#include "../include/mainwindow.h"
#include "../include/task.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui_MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushAddTaskButton, &QPushButton::clicked, this, &MainWindow::addTask);
    connect(ui->pushEditTaskButton, &QPushButton::clicked, this, &MainWindow::editTask);
    connect(ui->pushDeleteTaskButton, &QPushButton::clicked, this, &MainWindow::deleteTask);
    //Task t;
   // t.setTaskName("test task");
   // t.setTaskDesc("a test of my task");
   // t.setTaskPriority(69420);
   // t.setDueDate(QDate(2012,12,12));
   // t.print();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::addTask()
{
    qInfo() << QString("in MainWindow::addTask()");
    Task t;
    t.setTaskName(ui->lineTitleEdit->text());
    t.setTaskDesc(ui->lineDescriptionEdit->text());
    t.setDueDate(ui->dateDueTimeEdit->date());
    int priority = -1;
    if (ui->comboPriorityBox->currentText() == "High")
    {
        priority = 1;
    }
    else if (ui->comboPriorityBox->currentText() == "Medium") 
    {
        priority = 2;
    }
    else
    {
        priority = 3;
    }
    t.setTaskPriority(priority);

    taskVec.push_back(t);

    return true;
}

bool MainWindow::editTask()
{
    qInfo() << QString("in MainWindow::editTask()");
    return true;
}

bool MainWindow::deleteTask()
{
    qInfo() << QString("in MainWindow::deleteTask()");
    return true;
}
