#include<iostream>
using namespace std;
class SocialMediaUploader{
	public :
		void uploadContent()
		{
			 cout << "Uploading content to social media" << endl;
		}
};
class InstagramUploader :public SocialMediaUploader{
	public:
		void uploadContent()
		{
			cout << "Instagram: Uploading photos, reels, and stories" << endl;
		}
}; 
class YouTubeUploader : public SocialMediaUploader
{
	public:
		void uploadContent()
		{
			cout << "YouTube: Uploading videos and shorts" << endl;
		}
};
int main()
{
	InstagramUploader i1;
	YouTubeUploader y1;
	
	i1.uploadContent();
	y1.uploadContent();

}
