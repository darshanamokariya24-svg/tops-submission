//task3
#include<stdio.h>
struct MovieShow{
	char movie[50];
	int screen;
}s1;
struct time
{
	int hrs;
	int mins;	
}s2;
void main()
{
	printf("Enter movie name:");
	gets(s1.movie);
	printf("Enter Screen:");
	scanf("%d",&s1.screen);
	printf("Enter Time Hours:");
	scanf("%d",&s2.hrs);
	printf("Enter Mins:");
	scanf("%d",&s2.mins);
	
	printf("'Movie:%s,Screen:%d,Time:%d:%d '",s1.movie,s1.screen,s2.hrs,s2.mins);	
}
