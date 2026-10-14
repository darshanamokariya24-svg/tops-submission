//task3
#include<stdio.h>
void main()
{
	FILE *fptr;
	fptr=fopen("playlist.txt","a");
	fprintf(fptr,"\nThodi der");
	fprintf(fptr,"\nO Rangrez");
	fclose(fptr);
		
}
