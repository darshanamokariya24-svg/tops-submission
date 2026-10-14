#include <stdio.h>
int main()
{
    int minutes[7];
    int i;

    // Enter listening time for each day
    for (i = 0; i < 7; i++)
    {
        printf("Enter music listening minutes for day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    // Display the weekly listening data
    printf("\n--- Music Listening Logger ---\n");

    for (i = 0; i < 7; i++)
    {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }
}

