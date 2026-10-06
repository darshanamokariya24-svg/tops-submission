#include<stdio.h>
void formatPrice(int price)
{
    if (price >= 1000)
    {
        printf("\n$%d,%03d", price / 1000, price % 1000);
    }
    else
    {
        printf("\n$%d", price);
    }
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
