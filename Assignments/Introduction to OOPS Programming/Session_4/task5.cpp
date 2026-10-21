#include<iostream>
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
class InstagramInfluencer : public SocialMediaUser {
	// postStory(storyTitle) which prints '[username] posted a new story: 
	
	public:
		string storyTitle;
		InstagramInfluencer(string name, int f)
		: SocialMediaUser(name, f)
		{
		}
		void display(string storyTitle)
		{
			cout<<username<<" posted a new story "<<storyTitle;
		}
};
int main()
{
	InstagramInfluencer I1("darshna_mok",5000);
	I1.display("kahani ki kahani");
}
