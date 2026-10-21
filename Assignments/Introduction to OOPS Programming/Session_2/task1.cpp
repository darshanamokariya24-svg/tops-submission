#include<iostream>
using namespace std;
class PlayList{
	public:
		string name;
		int createdOn;
		bool isPublic=false;
};
int main()
{
	PlayList obj1;
	cout<<"Enter PlayList Name:";
	getline(cin,obj1.name);
	cout<<"Enter Created Date:(DD/MM/YY)";
	cin>>obj1.createdOn;
	cout<<endl<<"-----PlayList Details-----"<<endl;
	cout<<"PlayList Name:"<<obj1.name;
	cout<<endl<<"Created On:"<<obj1.createdOn;
	cout<<"Is Public :"<<obj1.isPublic;
}
