//task 2
#include<stdio.h>
struct FoodItem{
	char itemName[40];
	float price;
	float rating;
	
	int food[3];
};
void main()
{
	 struct FoodItem s1[3];
	 int i;
	for(i=0 ;i<3 ; i++)
	{
		printf("\nEnter details of Food Item %d\n", i + 1);
		printf("Enter Iteam Name:");
		scanf(" %49[^\n]",s1[i].itemName);
		printf("Enter price:");
		scanf("%f",&s1[i].price);
		printf("Enter Rating:");
		scanf("%f",&s1[i].rating);
	}
	printf("\n--------------Food Details--------------\n ");
	for(i=0 ;i<3 ; i++)
	{
		printf("Iteam Name: %s\n",s1[i].itemName);
		printf("Price: %.2f\n",s1[i].price);
		printf("rating: %.2f\n",s1[i].rating);		
	}
}
