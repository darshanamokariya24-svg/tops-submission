#include <stdio.h>

int main()
{
    char songs[3][50] = {"Believer", "Perfect", "Shape of You"};
    char guess[50];
    int randomSong;
//    srand(time(0));
//    randomSong = rand() % 3;

    printf("Guess the Song!\n");

    do
    {
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[randomSong]) == 0)
        {
            printf("Correct! You guessed the song!\n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[randomSong]) != 0);

  
}
