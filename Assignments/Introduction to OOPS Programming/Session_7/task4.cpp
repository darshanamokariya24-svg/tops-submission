#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    float price;

    ofstream file("wishlist.txt");

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter product name: ";
        getline(cin, name);

        cout << "Enter product price: ";
        cin >> price;
        cin.ignore();

        file << name << " - Rs. " << price << endl;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    string product;
    cout << "\n--- My Wishlist ---" << endl;

    while(getline(readFile, product))
    {
        cout << product << endl;
    }

    readFile.close();

}
