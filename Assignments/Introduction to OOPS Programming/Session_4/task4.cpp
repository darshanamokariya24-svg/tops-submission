#include <iostream>
#include <string>
using namespace std;

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

class GamingYouTuber : public YouTuber
{
public:
    GamingYouTuber(string name, int f, string channel)
        : YouTuber(name, f, channel)
    {
    }

    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main()
{
    GamingYouTuber gy1("darshna_mok", 5000, "darshna_gaming");

    gy1.displayProfile();
    gy1.streamGame("BGMI");

  
}
