//task2
#include<stdio.h>
void swapPlaylistCounts(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
	
}
void main()
{
	int playlist1=50;
	int playlist2=100;
	printf("Value of playlist : %d \nvalue of playlist2 : %d\n",playlist1,playlist2);
	printf("-----------------------------\n");
	printf("After swapping:\n");
	swapPlaylistCounts(&playlist1,&playlist2);
	printf("Value of playlist : %d \nvalue of playlist2 : %d",playlist1,playlist2);
}
