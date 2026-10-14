//Given a 2D array called cricketScores where each row represents 
//an IPL match and columns represent runs scored by each team,
//write code to print the highest score from each match.
#include<stdio.h>
void main()
{
	int cricketScores[3][3]={
		{202,201},
		{185,175},
		{195,180}
	};
	int i,max;
	for(i=0;i<3;i++)
	{
		max=cricketScores[i][0];
		if(cricketScores[i][1]>max)
		{
			max=cricketScores[i][1];
		}
		printf("Highest score in match %d = %d\n",i+1,max);
	}
}



