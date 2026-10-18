#include<stdio.h>
struct StudyLog { 
	char subject[40]; 
	float hours[7]; 
}s1;
void calculate()
{
	int i,j;
	float total,avg;
	for(i=0;i<7;i++)
	{
		printf("Enter Hours of day %f:",i+1);
		scanf("%f",&s1.hours[i]);
	}
	for(i=0;i<7;i++)
	{
		printf("Day %d Hours :",i+1);
		for(j = 0; j < (int)s1.hours[i]; j++)
        {
            printf("*");
        }	
        printf("\n");
		total=total+s1.hours[i];
	}		
	avg=total/7.0;
	printf("Total Hours:%f",total);
	printf("Daily Average :%f",avg);
}
struct StudyLog study[3];
void logHours()
{
	int i,day;
	for(i=0;i<3;i++)
	{
		printf("Enter Hours studied for %s\n",study[i].subject);
		for(day=0;day<7;day++)
		{
			printf("Day %d: ", day + 1);
            scanf("%f", &study[i].hours[day]);		
		}	
	}
}
void weekleyReport()
{
	int i,day;
	float total,avg;
	printf("\n========Weekly Report=========\n");	
	for(i =0 ;i < 3;i ++)
	{
		for(day = 0; day < 7;day ++)
		{
			total=total+study[i].hours[day];
		}
		avg=total/7.0;
		printf("\nSubject: %s\n", study[i].subject);
        printf("Total Hours: %.2f\n", total);
        printf("Daily Average: %.2f\n", avg);		
	}
}
void progressChart()
{
	int i , day,dot;
	
    printf("\n===== DAILY PROGRESS CHART =====\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n%s\n", study[i].subject);

        for (day = 0; day < 7; day++)
        {
            printf("Day %d: ", day + 1);

            for (dot = 0; dot < (int)study[i].hours[day]; dot++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}
void saveFile()
{
	
    int i, day;
    FILE *fptr;

    fptr = fopen("productivity_log.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (i = 0; i < 3; i++)
    {
        fprintf(fptr, "%s", study[i].subject);

        for (day = 0; day < 7; day++)
        {
            fprintf(fptr, ",%.2f", study[i].hours[day]);
        }

        fprintf(fptr, "\n");
    }

    fclose(fptr);
    printf("Records saved successfully!\n");
}
void main()
{
//	 (1) Log Today's Study Hours, (2)View Weekly Report, (3) Save & Exit.
	int choice,i;
	int day;
	char subjects[3][40] = {
        "C Programming",
        "C++ Programming",
        "Computer Science"
    };
	for (i = 0; i < 3; i++)
    {
        snprintf(study[i].subject, 40, "%s", subjects[i]);

        for ( day = 0; day < 7; day++)
        {
            study[i].hours[day] = 0;
        }
    }
	
	do{
		printf("-----Student Productivity Tracker-----\n");
		printf("1.Log Today's Study Hours.\n");
		printf("2.View Weekly Report.\n");
		printf("3.Save & Exit.\n");
		
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					//log todays hours
					logHours();
					break;
				
			case 2:
					//view weekly report
					weekleyReport();
					progressChart();
					break;
				
				case 3:
		
						//save and exit.
						saveFile();
						printf("Exiting program..!!\n");
						break;
					
				default:
					printf("Invalid choice..!!Try again.\n");
		}
	}while(choice!=3);
}
