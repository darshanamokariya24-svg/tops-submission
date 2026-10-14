//Build a function that takes a 1D array of 7 integers representing your daily 
//Zomato order amounts and calculates the average spend for the week.
//Use a loop to sum the values, then divide by the array length
#include<stdio.h>
void zomatoOrder()
{
	int order[7] = {500,1200,600,1800,1500,1100,700};
	int sum,i,len;
	for(i=0;i<7;i++)
	{
		sum=sum+order[i];
		len=sum / sizeof(order[0]);
	}
	printf("Sum of Total week order:%d",sum);
	printf("\nAverage of Total week order:%d",len);	
}
void main()
{
	zomatoOrder();
}
