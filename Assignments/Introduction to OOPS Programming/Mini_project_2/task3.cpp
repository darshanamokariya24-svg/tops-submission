
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayContent()
{
    ifstream file("content_list.txt");

    if (!file.is_open())
    {
        cout << "File not found!\n";
        return;
    }

    string line;
    string title, platform;
    int views, count = 0;

    cout << "\n===== CONTENT LIST =====\n";

    while (getline(file, line))
    {
        if (line.find("Title: ") == 0)
        {
            title = line.substr(7);
        }
        else if (line.find("Platform: ") == 0)
        {
            platform = line.substr(10);

            count++;

            cout << count << ". Title: " << title << endl;
            cout << "   Platform: " << platform << endl;
        }
    }

    if (count == 0)
    {
        cout << "No content found!\n";
    }

    file.close();
}

int main()
{
    displayContent();
}

