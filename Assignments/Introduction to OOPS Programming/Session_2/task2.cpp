#include<iostream>
using namespace std;
class PlayList{
	public:
		bool isPublic;
		
		playlist()
		{
			isPublic=false;
		}
		void togglePublic() 
		{
				isPublic=!isPublic;
		}
		void display()
		{
			cout<<"PlayList Status:"<<(isPublic?"Public":"Private")<<endl;
		}
};
int main()
{
	PlayList p;
	cout<<"Initial Status :";
	p.display();
	
	p.togglePublic();
	 cout << "After First Toggle: ";
    p.display();

    p.togglePublic();
    cout << "After Second Toggle: ";
    p.display();

}
