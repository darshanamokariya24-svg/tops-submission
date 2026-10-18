//task 1
#include<stdio.h>
void main()
{
	int marks[5];
	int i,total;
	float per;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Marks of subject %d: ",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		total=total+marks[i];
	}

	per=(total/500.00)*100.00;
	
	printf("Total:%d\n",total);
	printf("Percentage:%.2f\n",per);
	if(per<0 || per>100)
	{
		printf("Invalid Percentage..!!");
	}
	else if(per>=90)
	{
		printf("Grade A ..!! Excellent ..!!");
	}
	else if(per>=75)
	{
		printf("Grade B..!!Good Work !!");
	}
	else if(per>=60)
	{
		printf("Grade C..!!Nice..!!");
	}
	else if(per>=45)
	{
		printf("Grade D..! Improve performance");
	}
	else if(per<45)
	{
		printf("Grade F..!! Need Improvement");
	}



}
