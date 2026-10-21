#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string myText;
	ifstream MyReadFile("my_fav_songs.txt");
	while (getline (MyReadFile, myText)) {
  	// Output the text from the file
  	cout << myText<<endl;
    }
    MyReadFile.close();
}
