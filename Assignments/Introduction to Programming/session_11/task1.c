//task 1
#include<stdio.h>
void main()
{
	int likes=1000;
	int *ptrlikes;
	
	ptrlikes=&likes;
	printf("Values of likes:%d\n",likes);
	printf("Address stored in ptrlikes : %p",(void*)ptrlikes);
}
