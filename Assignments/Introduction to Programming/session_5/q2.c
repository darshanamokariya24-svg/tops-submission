#include<stdio.h>
void main()
{
	char meal[30];
	printf("Enter your preferred meal time:");
	scanf("%s",&meal);
	
	if(strcmp(meal,"breakfast")==0)
	{
		printf("suggested dish: Masala Dosa\n");
	}
	else{
	switch(meal[0])
	{
		case'l':
			if(strcmp(meal,"lunch")==0)
			{
				printf("suggested dish: Biryani\n");
			}
			else
			{
				printf("Try some fruits..!!");
			}
			break;	
		case'd':
			if(strcmp(meal,"dinner")==0)
			{
				printf("suggested dish: Punjabi Thali\n");	
			}
			else
			{
				printf("Try some fruits..!!");
			}
			break;
		case's':
			if(strcmp(meal,"snacks")==0)
			{
				printf("suggested dish: Samosa\n");	
			}
			else
			{
				printf("Try some fruits..!!");
			}
			break;
		default:
			printf("Try some fruits..!!");
	}
	}
}
