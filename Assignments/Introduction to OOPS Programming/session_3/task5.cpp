#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Playlist
{
public:
    string playlistName;

    // Parameterized constructor
    Playlist(string name)
    {
        playlistName = name;
        cout << "Playlist created: " << playlistName << endl;
    }

    // Destructor
    ~Playlist()
    {
        ofstream file("autosave.txt");

        if(file.is_open())
        {
            file << playlistName;
            file.close();

            cout << "Playlist auto-saved successfully!" << endl;
        }
        else
        {
            cout << "Unable to save playlist!" << endl;
        }
    }
};

int main()
{
    Playlist p1("My Favourites");

    cout << "Playlist is active." << endl;


}
