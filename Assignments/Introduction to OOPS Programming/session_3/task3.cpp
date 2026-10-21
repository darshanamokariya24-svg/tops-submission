#include <iostream>
using namespace std;

class Movie
{
public:
    string movieName;
    int year;
    float rating;

    // Parameterized constructor
    Movie(string name, int y, float r)
    {
        movieName = name;
        year = y;
        rating = r;
    }

    // Copy constructor
    Movie(const Movie &m)
    {
        movieName = m.movieName;
        year = m.year;
        rating = m.rating;
    }

    void display()
    {
        cout << "Movie Name: " << movieName << endl;
        cout << "Year: " << year << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main()
{
    Movie m1("3 Idiots", 2009, 8.4);

    Movie m2(m1);  // Copy constructor

    cout << "--- Original Movie ---" << endl;
    m1.display();

    cout << "\n--- Copied Movie ---" << endl;
    m2.display();

}
