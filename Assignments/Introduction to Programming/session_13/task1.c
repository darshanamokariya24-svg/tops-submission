// task1 
#include<stdio.h>
void main()
{
	FILE *fptr;
	fptr=fopen("playlist.txt","w");
	fprintf(fptr,"\nAlfaaz");
	fprintf(fptr,"\nPiya ghar aya");
	fprintf(fptr,"\nLost in love");
	fclose(fptr);
}
