#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string myText;
 	ofstream file("my_fav_songs.txt", ios::app);
 	string song;
    cout << "Enter song name: ";
    getline(cin, song);

    file << song << endl;

    file.close();

    cout << "Song added successfully!";
	
	
}
