//Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). 
//Assign sample values and print each variable with its data type.

#include<stdio.h>
void main()
{
	char productName[] = "Titan Workwear Watch";
	float price=2995.00;
	double rating=4.4;
	
	printf("Product Name : %s\n",productName);
	printf("Data type : Char[]\n \n");
	
	printf("Product Price : %.2f\n",price);
	printf("Data type : Float\n \n");
		 
	printf("Product Name : %.1f\n",rating);
	printf("Data type : Double\n \n");	 
}
