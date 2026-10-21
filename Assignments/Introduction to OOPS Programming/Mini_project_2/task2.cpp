
#include <iostream>
#include <fstream>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void addContent()
    {
        cout << "Enter Content Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Platform: ";
        getline(cin, platform);

        cout << "Enter Views: ";
        cin >> views;

        cout << "Enter Status: ";
        cin.ignore();
        getline(cin, status);

        // Open file in append mode
        ofstream file("content_list.txt", ios::app);

        if (file.is_open())
        {
            file << "Title: " << title << endl;
            file << "Platform: " << platform << endl;
            file << "Views: " << views << endl;
            file << "Status: " << status << endl;
            file << "----------------------" << endl;

            file.close();

            cout << "\nContent saved successfully!\n";
        }
        else
        {
            cout << "Error opening file!\n";
        }
    }
};

int main()
{
    Content c;
    int choice;

    do
    {
        cout << "\n===== CONTENT MENU =====\n";
        cout << "1. Add New Content\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addContent();
            break;

        case 2:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 2);
}

