//function isEven(num){if(num%2==0){return true;}else{return false;}}
#include<stdio.h>
//created function isEven with parameter 
void isEven(int num)
{
	//check condtion is even  or not
	if(num%2==0)
	{
		//if is even
		printf("Even!!");
	}
	else{
		//not even
		printf("Not even / This is odd.");
	}	
}
int main()
{
	int num;
	//taking input/number from the user to check 
	printf("Enter number:");
	scanf("%d",&num);
	//function call
	isEven(num);
}
