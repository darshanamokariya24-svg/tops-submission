#include<iostream>
using namespace std;
class  InstaStory{
	protected:
		float storyViews;
};
class SponsoredStory : public InstaStory 
{
	public:
		void setStoryView(float s)
		{
			storyViews=s;	
		}	
		void getStoryView()
		{
			cout<<"Story Views:"<<storyViews<<endl;
		}
};
int main()	
{
	SponsoredStory s1;
	float views;
	cout<<"Enter Story View:";
	cin>>views;
	
	s1.setStoryView(views);
	s1.getStoryView();
	
}
