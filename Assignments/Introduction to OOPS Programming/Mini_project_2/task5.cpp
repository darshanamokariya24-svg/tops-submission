
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
#include <limits>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;
};

// Read all content from file
vector<Content> readContent()
{
    vector<Content> items;
    ifstream file("content_list.txt");
    string line;
    Content c;

    while (getline(file, line))
    {
        if (line.find("Title: ") == 0)
            c.title = line.substr(7);

        else if (line.find("Platform: ") == 0)
            c.platform = line.substr(10);

        else if (line.find("Views: ") == 0)
            sscanf(line.substr(7).c_str(), "%d", &c.views);

        else if (line.find("Status: ") == 0)
        {
            c.status = line.substr(8);
            items.push_back(c);
        }
    }

    file.close();
    return items;
}

// Save content to file
void saveContent(vector<Content> items)
{
    ofstream file("content_list.txt");

    for (int i = 0; i < (int)items.size(); i++)
    {
        file << "Title: " << items[i].title << endl;
        file << "Platform: " << items[i].platform << endl;
        file << "Views: " << items[i].views << endl;
        file << "Status: " << items[i].status << endl;
        file << "----------------------" << endl;
    }

    file.close();
}

// Display content list
void displayContent()
{
    vector<Content> items = readContent();

    if (items.empty())
    {
        cout << "\nNo content found!\n";
        return;
    }

    cout << "\n===== CONTENT LIST =====\n";

    for (int i = 0; i < (int)items.size(); i++)
    {
        cout << "\n" << i + 1 << ". Title: "
             << items[i].title << endl;
        cout << "   Platform: " << items[i].platform << endl;
        cout << "   Views: " << items[i].views << endl;
        cout << "   Status: " << items[i].status << endl;
    }
}

// Add new content
void addContent()
{
    Content c;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Content Title: ";
    getline(cin, c.title);

    cout << "Enter Platform: ";
    getline(cin, c.platform);

    cout << "Enter Views: ";
    cin >> c.views;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Status: ";
    getline(cin, c.status);

    ofstream file("content_list.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!\n";
        return;
    }

    file << "Title: " << c.title << endl;
    file << "Platform: " << c.platform << endl;
    file << "Views: " << c.views << endl;
    file << "Status: " << c.status << endl;
    file << "----------------------" << endl;

    file.close();

    cout << "\nContent added successfully!\n";
}

// Update content status
void updateStatus()
{
    vector<Content> items = readContent();

    if (items.empty())
    {
        cout << "\nNo content available!\n";
        return;
    }

    displayContent();

    int number;
    cout << "\nEnter content number to update: ";
    cin >> number;

    if (number < 1 || number > (int)items.size())
    {
        cout << "Invalid content number!\n";
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter new status: ";
    getline(cin, items[number - 1].status);

    saveContent(items);

    cout << "\nStatus updated successfully!\n";
    displayContent();
}

// Delete content by number
void deleteContent()
{
    vector<Content> items = readContent();

    if (items.empty())
    {
        cout << "\nNo content available to delete!\n";
        return;
    }

    cout << "\n===== CONTENT LIST =====\n";

    for (int i = 0; i < (int)items.size(); i++)
    {
        cout << i + 1 << ". Title: "
             << items[i].title << endl;
        cout << "   Platform: "
             << items[i].platform << endl;
        cout << "   Status: "
             << items[i].status << endl;
    }

    int number;

    cout << "\nEnter content number to delete: ";
    cin >> number;

    if (number < 1 || number > (int)items.size())
    {
        cout << "Invalid content number!\n";
        return;
    }

    // Remove selected content
    items.erase(items.begin() + number - 1);

    // Save remaining content to file
    saveContent(items);

    cout << "\nContent deleted successfully!\n";

    // Display updated list
    displayContent();
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== CONTENT MENU =====\n";
        cout << "1. Add New Content\n";
        cout << "2. Display Content\n";
        cout << "3. Update Content Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addContent();
                break;

            case 2:
                displayContent();
                break;

            case 3:
                updateStatus();
                break;

            case 4:
                deleteContent();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);
}

