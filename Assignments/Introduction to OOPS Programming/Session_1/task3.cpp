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
        cout << "Task: " << title << endl;
        cout << "Status: " << (isDone ? "DONE" : "PENDING") << endl;
    }
};

int main()
{
    Task t1("Complete Assignment");

    cout << "Before marking done:" << endl;
    t1.display();

    t1.markDone();

    cout << "\nAfter marking done:" << endl;
    t1.display();

   
}
