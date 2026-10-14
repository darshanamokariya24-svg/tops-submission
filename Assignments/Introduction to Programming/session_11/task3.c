//task3
#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	int *ptradd;
	for(i=0;i<5;i++)
	{
		printf("Enter order amount:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		ptradd=&arr[i];
		printf("\nArray Element : %d ",arr[i]);
		printf("Adress : %p ",(void*)ptradd);
	}
}
