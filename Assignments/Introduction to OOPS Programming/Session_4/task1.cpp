#include<iostream>
using namespace std;
class  SocialMediaUser{
	public:
		string username;
		float followers;
	void displayProfile()
	{
		cout<<"Enter User Name:";
		getline(cin,username);
		cout<<"Enter Followers:";
		cin>>followers;
		
		cout<<"User Name:"<<username<<endl;
		cout<<"Followers:"<<followers<<endl;
	}
};
int main()
{
	SocialMediaUser s1;
	s1.displayProfile();
}
