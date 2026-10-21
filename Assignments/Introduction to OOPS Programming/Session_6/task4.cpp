#include<iostream>
using namespace std;
class UserProfile{
	private:
		string phoneNumber;
	public:
		void setPhoneNumber(string number)
		{
			phoneNumber=number;
		}
		void getPhoneNumber()
		{
			cout<<"Phone Number :"<<phoneNumber<<endl;
		}
};
int main()
{
	UserProfile user1;
	string number;
	
	cout<<"Enter Phone Number:";
	getline(cin,number);
	
	user1.setPhoneNumber(number);
	user1.getPhoneNumber();
}
