//task 2
#include<stdio.h>
void main()
{
	float time[7];
	int i,j;
	float total,avg;
	float highest=time[0];
	
 	for(i = 0; i < 7; i++)
    {
        do
        {
            printf("Enter study hours for Day %d: ", i + 1);
            scanf("%f", &time[i]);

            if(time[i] < 0 || time[i] > 24)
            {
                printf("Invalid hours! Enter between 0 and 24.\n");
            }

        } while(time[i] < 0 || time[i] > 24);
    }
	for(i=0;i<7;i++)
	{
		total=total+time[i];
		if(time[i]>highest)
		{
			highest=time[i];		
		}		
	}
	avg=(total/7.00);
	printf("\n-----------Weekly Study Hours Analyser------------\n");
	for(i=0;i<7;i++)
	{
		printf("Time Of Day %d:",i+1);
		for(j = 0; j < (int)time[i]; j++)
        {
            printf("*");
        }	
        printf("\n");
	}
	printf("Total :%.2f\n",total);
	printf("Average :%.2f",avg);

}
