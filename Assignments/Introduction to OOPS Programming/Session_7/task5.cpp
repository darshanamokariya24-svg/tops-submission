#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("insta_followers.txt");

    if(!file)
    {
        cout << "File not found!" << endl;
        return 1;
    }

    string name;
    int count = 0;

    while(getline(file, name))
    {
        count++;
    }

    file.close();

    cout << "Total Followers: " << count << endl;

 }
