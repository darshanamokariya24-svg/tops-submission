#include<iostream>
using namespace std;
class Playlist{
	public:
		string playListName;
		Playlist()
		{
			playListName="My Favorites.";
			cout<<"Welcome To Your PlayList..."<<endl;
		}
		void display()
		{
			cout<<"PlayList : "<<playListName<<endl;
		}
};
int main(){
	Playlist p1;
	p1.display();
}
