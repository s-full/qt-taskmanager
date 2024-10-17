#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QWidget>
#include "task.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();
private slots:
	bool addTask();
	bool deleteTask();
	bool editTask();

private:
	Ui_MainWindow *ui;
	std::vector<Task> taskVec;
};

#endif // MAINWINDOW_H
