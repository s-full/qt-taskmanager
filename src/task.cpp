#include "../include/task.h"

Task::Task()
{

}

Task::~Task()
{}

void Task::setDueDate(const QDate& date)
{
    dueDate = date;
}

QDate Task::getDueData()
{
    return dueDate;
}

void Task::setTaskName(const QString& name)
{
    taskName = name;
}
QString Task::getTaskName()
{
    return taskName;
}

void Task::setTaskDesc(const QString& desc)
{
    taskDesc = desc;
}
QString Task::getTaskDesc()
{
    return taskDesc;
}

void Task::setTaskPriority(const int priority)
{
    taskPriority = priority;
}
int Task::getTaskPriority()
{
    return taskPriority;
}

void Task::print()
{
    qInfo() << "Task name: " << taskName;
    qInfo() << "Task description: " << taskDesc;
    qInfo() << "Task due date: " << dueDate.toString();
    qInfo() << "Task priority: " << taskPriority;
}
