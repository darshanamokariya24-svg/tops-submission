#include<iostream>
using namespace std;
class PlayList{
	public:
		bool isPublic;
		string songs[3];
		playlist()
		{
			isPublic=false;
		
		}
		void addSong()
		{
			int i;
			for(i=0;i<3;i++)
			{
				cout<<"Enter Song name:";
				getline(cin,songs[i]);	
			}	
		} 
		void togglePublic() 
		{
				isPublic=!isPublic;
		}
		void display()
		{
			int i;
			for(i=0;i<3;i++)
			{
				cout<<"Song Title:"<<songs[i]<<endl;
			}
			
			cout<<"PlayList Status:"<<(isPublic?"Public":"Private")<<endl;
		}
	};
int main()
{
	PlayList p1;
	p1.addSong();
	cout<<"-------Updeted List---------"<<endl;
	p1.display();
}
