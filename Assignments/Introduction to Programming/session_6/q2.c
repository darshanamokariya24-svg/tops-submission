//Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 
//2) Add a new team, 3) Exit. Use a while loop to keep showing the menu until the user chooses Exit.
#include<stdio.h>
void main()
{
	int ch;
	char team[30];
	
	
	printf("Enter 1 for view your favorite 3 IPL teams.\n");
	printf("Enter 2 for Add a new team.\n");
	printf("Enter 3 for Exit.\n");
		
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);



		if(ch==1)
		{
			printf("Your favorite teams are:\n");
			printf("1. Mumbai Indians\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Rajasthan Royals\n");
		}
		else if(ch==2)
		{
			printf("Enter team name you want to add:");
			scanf(" %[^\n]", team);
            printf("Team added: %s\n", team);
		}
		else if(ch==3)
		{
			break;
		}
		else
		{
			printf("Invalid choice..");
		}
	}
}

