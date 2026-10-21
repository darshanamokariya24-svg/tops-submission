
#include <iostream>
using namespace std;

class Content
{
    public:
        string title;
        string platform;
        int views;
        string status;

        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Platform: " << platform << endl;
            cout << "Views: " << views << endl;
            cout << "Status: " << status << endl;
        }
};

int main()
{
    Content c1;
	cout<<"Enter Title:";
	getline(cin,c1.title);

	cout<<"Enter Platform:";
	getline(cin,c1.platform);

	cout<<"Enter Views:";
	cin>>c1.views;
	cin.ignore();
	
	cout<<"Enter Status:";
	getline(cin,c1.status);

    c1.display();

}

