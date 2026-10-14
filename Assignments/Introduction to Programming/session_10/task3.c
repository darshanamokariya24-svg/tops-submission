//Copy the string 'Flipkart' into another string variable called
//shoppingApp using strcpy(), then print the value of shoppingApp.
#include<stdio.h>
#include<string.h>
void main()
{
	char shoppingApp[20];
	char app[]="Flipkart";
	int i;
		
//	strcpy(shoppingApp,app);
	for(i=0;i[app]!=0;i++)
	{
		shoppingApp[i]=app[i];
	}
	shoppingApp[i]='\0';	
	printf(" Copy String : %s",shoppingApp);
}


