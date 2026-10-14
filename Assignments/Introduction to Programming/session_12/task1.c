//task1
#include<stdio.h>
struct playlist{
	char title[30];
	char artist[30];
	int duration; 
}s1;
void main()
{
	printf("Enter Title:");
	gets(s1.title);
	printf("Enter Artist Name:");
	gets(s1.artist);
	printf("Enter duration:");
	scanf("%d",&s1.duration);
	
	printf("Title: %s\n",s1.title);
	printf("Artist: %s\n ",s1.artist);
	printf("Duration: %d ",s1.duration);	
}
