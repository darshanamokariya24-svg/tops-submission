//Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over 5 days
//(rows = playlists, columns = days).
//Fill it with sample numbers and print the ratings for the second playlist.
#include<stdio.h>
void main()
{
	int playlistRatings[3][5]={
	{5,4,4,5,3},
	{4,3,5,4,4},
	{4,5,5,4,5}
	};
	int i,j;
	printf("Ratings of playlist:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ", playlistRatings[i][j]);
		}
		printf("\n");
	}
}

