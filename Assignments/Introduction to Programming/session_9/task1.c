//Declare a 1D array called dailySteps with 7 elements to 
//store your step count for each day of the week, assign 
//sample values, and print each value using a loop.

#include<stdio.h>
void main()
{
	int dailySteps[7]={3000,3500,4000,3800,2000,2200,3000};
	int i;
	printf("Dailt Steps:");
	for(i=0;i<7;i++)
	{
		printf("\t%d",dailySteps[i]);
	}
}
