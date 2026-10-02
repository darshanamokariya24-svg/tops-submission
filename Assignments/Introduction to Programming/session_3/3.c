//Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), 
//and average song duration in minutes (float). Print all values in a single formatted sentence.

#include<stdio.h>
void main()
{
	char playList_name[]="Favorite songs";
	int total_number_of_song =20;
	float song_duration=4.00;
	
	  printf("My Spotify playlist \"%s\" has %d songs with an average duration of %.1f minutes per song.\n" ,playList_name,total_number_of_song,song_duration);
}
