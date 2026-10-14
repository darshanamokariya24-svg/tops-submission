//Declare a string variable called songTitle and assign it the value 'Tum Hi Ho'.
//Print the length of the string using strlen().
#include<stdio.h>
#include<string.h>
void main()
{
	char songTitle[30]="Tum Hi Ho";
	int i,len=0;
//	printf("Length of 'Tum Hi Ho' : %d ",strlen(songTitle));
	for(i=0;i[songTitle]!='\0';i++)
	{
		len++;
	}
	printf("Length of string 'Tum Hi Ho': %d " , len);
}








