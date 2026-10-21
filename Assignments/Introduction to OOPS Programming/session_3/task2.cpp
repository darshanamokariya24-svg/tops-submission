#include<iostream>
using namespace std;
class Product{
	
	public:
		string pname;
		int price;
		float rating;
		Product(string productName,int p,float r)
		{
			pname=productName;
			price=p;
			rating=r;
		}
		void displayInfo()
		{
			cout<<"--------------Product Details----------------"<<endl;
			cout<<"Product Name: "<<pname<<endl;
			cout<<"Product price: "<<price<<endl;
			cout<<"Product Rating: "<<rating<<endl;
		}

};
int main(){
	Product p1("phone",12000,4.5);
	p1.displayInfo();
}
