//Create a Flipkart discount calculator that asks the user for the total cart amount. Use nested if statements
//to check: if amount > 2000, apply 20% discount; else if amount > 1000, apply 10% discount; else, no discount. 
//Print the final amount to pay.
#include<stdio.h>
void main()
{
	int amount;
	float discount, final_amount;
	printf("Enter your total cart amount :");
	scanf("%d",&amount);
	
	if(amount>=2000)
	{
		printf("Congratulations..!You got discount\n");
		discount = amount *20/100;
		final_amount = amount - discount;
		printf("FInal Amount to pay: %.2f \n",final_amount);
	}
	else if(amount>=1000)
	{
		printf("yeyy..!You got discount\n");
		discount = amount *10/100;
		final_amount = amount - discount;
		printf("FInal Amount to pay: %.2f\n",final_amount);
	}
	else	
	{
		printf("No Discount\n");
		printf("FInal Amount to pay: %d \n",amount);
	}
}
