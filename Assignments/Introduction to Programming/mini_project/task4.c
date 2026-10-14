
#include <stdio.h>

int main()
{
    int minutes[7];
    int choice, i, total, highest;
    float average;
    FILE *fptr;

    do
    {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Report\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Open file to save weekly data
                fptr = fopen("music_log.txt", "w");

                if (fptr == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }

                for (i = 0; i < 7; i++)
                {
                    printf("Enter minutes for day %d: ", i + 1);
                    scanf("%d", &minutes[i]);

                    fprintf(fptr, "Day %d: %d minutes\n",
                            i + 1, minutes[i]);
                }

                fclose(fptr);
                printf("Data saved successfully!\n");
                break;

            case 2:
                // Read saved data from file
                fptr = fopen("music_log.txt", "r");

                if (fptr == NULL)
                {
                    printf("No saved data found!\n");
                    break;
                }

                total = 0;
                highest = -1;

                // Read each day's listening minutes
                for (i = 0; i < 7; i++)
                {
                    if (fscanf(fptr, "Day %*d: %d minutes",
                               &minutes[i]) != 1)
                    {
                        break;
                    }

                    total += minutes[i];

                    if (minutes[i] > highest)
                    {
                        highest = minutes[i];
                    }
                }

                fclose(fptr);

                if (i == 0)
                {
                    printf("No valid data found!\n");
                    break;
                }

                // Generate weekly report
                average = (float) total / i;

                printf("\n--- Weekly Music Report ---\n");
                printf("Total listening: %d minutes\n", total);
                printf("Average listening: %.2f minutes\n", average);
                printf("Highest listening: %d minutes\n", highest);
                break;

            case 3:
                printf("Exiting Music Listening Logger!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}

