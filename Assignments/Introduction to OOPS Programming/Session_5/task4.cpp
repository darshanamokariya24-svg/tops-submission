#include<iostream>
using namespace std;
class MusicPlayer {
	public:
		virtual void play(string song) 
 		{ 
			cout<<"Plyaing :"<<song; 
 		}
};
class SpotifyPlayer:public MusicPlayer
{	public:
		void play(string song) 
		{
			cout<<"Streaming on Spotify: "<<song<<endl; 
		}
}; 
int main()
{
	string song;
	cout << "Enter Song name: ";
    getline(cin,song);
	MusicPlayer *m;
    SpotifyPlayer s;

    m = &s;
    m->play(song);
}
