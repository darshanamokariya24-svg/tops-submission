#include <iostream>
#include <string>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title << " - ";
        cout << (isDone ? "DONE" : "PENDING") << endl;
    }
};

class TaskList
{
public:
    Task tasks[5];
    int count;

    TaskList() : tasks{Task(""), Task(""), Task(""), Task(""), Task("")}
    {
        count = 0;
    }

    void addTask(string title)
    {
        if(count < 5)
        {
            tasks[count] = Task(title);
            count++;
        }
        else
        {
            cout << "Task list is full!" << endl;
        }
    }

    void markTaskDone(int index)
    {
        if(index >= 0 && index < count)
        {
            tasks[index].markDone();
        }
        else
        {
            cout << "Invalid task index!" << endl;
        }
    }

    void showTasks()
    {
        cout << "\n--- Task List ---" << endl;

        for(int i = 0; i < count; i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Complete Assignment");
    list.addTask("Study C++");
    list.addTask("Practice Coding");

    list.markTaskDone(1);

    list.showTasks();

}
