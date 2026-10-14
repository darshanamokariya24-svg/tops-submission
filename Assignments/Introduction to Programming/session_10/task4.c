//Build a small script that takes the user's full name as input and creates a username
//by copying only the first 5 characters using strcpy(). Print the generated username.
#include<stdio.h>
#include<string.h>
void main()
{
	char name[50];
	char username[6];
		
	printf("Enter your full name:");
	scanf("%s",name);
	
	if(strlen(name)<5)
	{
		strcpy(username,name);
	}
	else
	{
		strncpy(username,name,5);
		username[5]='\0';
	}
	printf("Generated username: %s", username);
}

