#include <stdio.h>
int main()
{
    int minutes[7];
    int choice, i, total;
    FILE *fptr;

    do
    {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Open file to save listening data
                fptr = fopen("music_log.txt", "w");

                if (fptr == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }

                // Enter and save minutes for seven days
                for (i = 0; i < 7; i++)
                {
                    printf("Enter minutes for day %d: ", i + 1);
                    scanf("%d", &minutes[i]);

                    fprintf(fptr, "Day %d: %d minutes\n",
                            i + 1, minutes[i]);
                }

                fclose(fptr);
                printf("Data saved to music_log.txt successfully!\n");
                break;

            case 2:
                // Read and display saved data
                fptr = fopen("music_log.txt", "r");

                if (fptr == NULL)
                {
                    printf("No saved data found!\n");
                    break;
                }

                total = 0;

                printf("\n--- Weekly Summary ---\n");

                for (i = 0; i < 7; i++)
                {
                    if (fscanf(fptr, "Day %*d: %d minutes\n",
                               &minutes[i]) == 1)
                    {
                        printf("Day %d: %d minutes\n",
                               i + 1, minutes[i]);

                        total += minutes[i];
                    }
                    else
                    {
                        break;
                    }
                }

                printf("Total listening time: %d minutes\n", total);

                fclose(fptr);
                break;

            case 3:
                printf("Exiting Music Listening Logger. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);
}

