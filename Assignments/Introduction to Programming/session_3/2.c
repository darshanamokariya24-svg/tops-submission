//2.Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato
// order with a given base price.<br><br><em><strong>
//Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>

#include<stdio.h>
void main()
{
	const  float gst_rate = 18.00;
	float base_price = 500.0;
	float gst_amount;
	float final_price;
	
	//gst amount
	gst_amount = base_price * gst_rate/100;
	
	//final price
	final_price = base_price + gst_amount;
	
	printf("Base Price:%.2f \n",base_price);
	printf("GST rate:%.2f \n",gst_rate);
	printf("GST Amount: %.2f \n" , gst_amount);
	printf("Fianl Amount : %.2f \n" , final_price);
	
}
