#include <iostream>
#include <string>
using namespace std;

// Base class
class SocialMediaUser
{
public:
    string username;
    int followers;

    SocialMediaUser(string name, int f)
    {
        username = name;
        followers = f;
    }

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

// Derived class
class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    YouTuber(string name, int f, string channel)
        : SocialMediaUser(name, f)
    {
        channelName = channel;
    }

    void uploadVideo(string title)
    {
        cout << "Video " << title
             << " uploaded to " << channelName << endl;
    }
};

int main()
{
    YouTuber y1("Darshna", 5000, "Darshna Vlogs");

    y1.displayProfile();
    cout << "Channel Name: " << y1.channelName << endl;

    y1.uploadVideo("My First Vlog");
}
