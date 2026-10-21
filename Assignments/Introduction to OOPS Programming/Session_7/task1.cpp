#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream MyFile("my_fav_songs.txt ");
	
	MyFile << "Piya Ghar Aya"<<endl;
	MyFile << "Alfaz"<<endl;
	MyFile << "Lost In Love"<<endl;
	MyFile << "Taare"<<endl;
	MyFile << "Qubool"<<endl;
	
	MyFile.close();

}
