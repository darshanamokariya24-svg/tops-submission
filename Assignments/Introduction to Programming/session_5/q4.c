//Write a program that takes a user's age and checks eligibility for three things using if-else statements:
//if age >= 18, print 'Eligible for Driving License'; if age >= 21, also print 'Eligible for Credit Card'; 
//if age >= 25, also print 'Eligible for Car Rental'. Print all applicable messages for the given age.

#include<stdio.h>
void main()
{
	int age;
	printf("Enter your Age :");
	scanf("%d",&age);
	
	if(age>=25)
	{
		printf("Eligible for Car Rental");
	}
	else if(age>=21)
	{
		printf("Eligible for Credit Card");
	}
	else if(age>=18)
	{
		printf("Eligible for Driving License");
	}
	else
	{
		printf("Not eligible for anything");
	}
}
