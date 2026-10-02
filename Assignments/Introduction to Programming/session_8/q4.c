#include<stdio.h>
void formatPrice(int price)
{
	printf("$%d\n", price);
} 
int main()
{
	int p1,p2,p3;
	printf("Enter price 1:");
	scanf("%d",&p1);
	printf("Enter price 2:");
	scanf("%d",&p2);
	printf("Enter price 3:");
	scanf("%d",&p3);	
	
	formatPrice(p1);
	formatPrice(p2);
	formatPrice(p3);
}
