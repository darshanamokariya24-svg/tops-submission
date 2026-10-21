#include<iostream>
using namespace std;

class Flipkart
{
public:
    void searchProduct(string name)
    {
       cout<<"Product found: "<<name<<endl;
    }

    void searchProduct(string name, string category)
    {
        cout << "Searching by product name and category" << endl;
        cout << "Product: " << name << endl;
        cout << "Category: " << category << endl;
    }
    void findProduct(string name)
    {
        if(name == "iPhone" || name == "Samsung")
            searchProduct(name, "Electronics");

        else if(name == "Shirt" || name == "Jeans")
            searchProduct(name, "Clothing");

        else if(name == "Shoes" || name == "Sneakers")
            searchProduct(name, "Footwear");

        else
        {
            cout << "Product not found!" << endl;
        }
    }
};

int main()
{
	string name;
	Flipkart f;
	

    cout << "Enter product name: ";
    getline(cin, name);

    f.findProduct(name);

}
