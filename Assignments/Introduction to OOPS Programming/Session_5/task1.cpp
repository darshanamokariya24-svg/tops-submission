#include<iostream>
using namespace std;
class PaymentProcessor{
//	two overloaded methods processPayment(): one that takes only an amount, 
//	and one that takes amount and a coupon code.
//	Print which version is called and the final amount in each case.
	public:
		void processPayment(double amount)
		{
			cout<<"Payment without coupon code:"<<amount<<endl;
			cout<<"Final Amount is :"<<amount<<endl;
		}
		void processPayment(double amount,string coupon_code)
		{
			cout<<endl<<"--------------------------------------"<<endl;
			cout<<"Payment with Coupon "<<endl;
			if(coupon_code =="SAVE10")
			{
				amount-=(amount*0.10);
			}
			cout << "Coupon Code: " << coupon_code << endl;
        	cout << "Final Amount: Rs. " << amount << endl;
		}


};

int main()
{
	double amount;
	string code="SAVE10";
	cout<<"Enter Final Amount:";
	cin>>amount;
	
	PaymentProcessor p1;
	p1.processPayment(amount);
	p1.processPayment(amount,code);
}

