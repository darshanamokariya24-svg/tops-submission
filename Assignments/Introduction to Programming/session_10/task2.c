//Take input for two usernames (as strings) and compare them using strcmp().
// Display whether they are the same or different.
#include<stdio.h>
#include<string.h>
void main()
{
	char input1[20];
	char input2[20];
	printf("Enter 1 input:");
	scanf("%s",input1);
	printf("Enter 2 input:");
	scanf("%s",input2);	
	
	if(strcmp(input1,input2)==0){
		printf("Same.");
	}
	else{
		printf("Not same.");
	}


}
