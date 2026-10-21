#include<iostream>
using namespace std;
class Product 
{
	public :
		virtual void upload()=0;
};
class  Electronics:public Product{
	public:
		void upload()
		{
			cout<<"Electronic Product."<<endl;
		}
};
class Clothing: public Product{
	public:
		void upload()
		{
			cout<<"Clothing Product."<<endl;
		}
};
int main()
{
	Electronics E1;
	Clothing C1;
	
	E1.upload();
	C1.upload();
}
