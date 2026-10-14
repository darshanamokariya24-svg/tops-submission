//task2
#include<stdio.h>
int main()
{
	int i;
	FILE *fptr;
	char a[200];
	fptr=fopen("playlist.txt","r");
//	fgets(a,100,fptr);
	while(fgets(a, 100, fptr) != NULL)
	{
		printf("%s",a);
	}
	fclose(fptr);
}
