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
class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    Podcaster(string name, int f, string podcast)
        : SocialMediaUser(name, f)
    {
        podcastName = podcast;
    }

    void publishEpisode(string epTitle)
    {
        cout << "Episode " << epTitle
             << " published on " << podcastName << endl;
    }
};

int main()
{
    Podcaster p1("darshna_mok", 5000, "My Podcast");

    p1.displayProfile();

    p1.publishEpisode("Podcast with Kirtidan Gadhvi");
}
