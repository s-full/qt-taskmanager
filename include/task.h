#ifndef TASK_H
#define TASK_H
#include <QDate>
#include <QDebug>


class Task {
private:
	QDate dueDate;
	QString taskName;
	QString taskDesc;
	int taskPriority;

public:
	Task();
	~Task();

	void setDueDate(const QDate& date);
	QDate getDueData();

	void setTaskName(const QString& name);
	QString getTaskName();

	void setTaskDesc(const QString& desc);
	QString getTaskDesc();

	void setTaskPriority(const int);
	int getTaskPriority();

	void print();



};

#endif // TASK_H
