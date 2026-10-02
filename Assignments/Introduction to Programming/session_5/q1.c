//1.Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements 
//to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!').
//If the team is not recognized, print 'Team not found!'

#include<stdio.h>
void main()
{
	char team[30];
	
	printf("Enter your favorite team :");
	scanf( "%[^\n]", &team);
	
	if (strcmp(team, "Mumbai Indians") == 0)
    {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "Chennai Super Kings") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "Royal Challengers Bengaluru") == 0)
    {
        printf("Go Royal Challengers Bengaluru!\n");
    }
    else if (strcmp(team, "Kolkata Knight Riders") == 0)
    {
        printf("Come on Kolkata Knight Riders!\n");
    }
    else if (strcmp(team, "Rajasthan Royals") == 0)
    {
        printf("Go Rajasthan Royals!\n");
    }
    else if (strcmp(team, "Sunrisers Hyderabad") == 0)
    {
        printf("Let's go Sunrisers Hyderabad!\n");
    }
    else
    {
        printf("Team not found!\n");
    }
}
