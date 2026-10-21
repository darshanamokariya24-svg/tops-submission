#include<iostream>
using namespace std;
class Song{
	private :
		string title;
		string artist;
	public:
		void setSong(string t,string a)
		{
			title=t;
			artist=a;
		}
		string getTitle()
		{
			return title;
		}
		string getArtist()
		{
			return artist;
		}
};

int main()
{
	string title;
	string artist;
	//before updated
	cout<<"Enter Song Title:";
	getline(cin,title);
	cout<<"Enter Artist Name:";
	getline(cin,artist);
	Song s1;
	s1.setSong(title,artist);
	
	cout<<"Old Title: "<<s1.getTitle()<<endl;
	//after updated
	cout<<"Enter Song Title:";
	getline(cin,title);
	cout<<"Enter Artist Name:";
	getline(cin,artist);
	s1.setSong(title,artist);
	
	cout<<endl<<"Updated Title: "<<s1.getTitle()<<endl;
	cout<<"Artist: "<<s1.getArtist()<<endl;
}
