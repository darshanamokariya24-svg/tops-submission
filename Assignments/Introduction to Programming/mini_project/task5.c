#include <stdio.h>
int main()
{
    int minutes[7] = {0};
    int choice, i, total, highest;
    char confirm;
    float average;
    FILE *fptr;

    do
    {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Report\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Save listening minutes to file
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
{
    char line[100];
    int count, value;

    fptr = fopen("music_log.txt", "r");

    if (fptr == NULL)
    {
        printf("File not found!\n");
        break;
    }

    total = 0;
    highest = 0;
    count = 0;

    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        if (sscanf(line, "Day %*d: %d minutes", &value) == 1)
        {
            total += value;

            if (count == 0 || value > highest)
            {
                highest = value;
            }

            count++;
        }
    }

    fclose(fptr);

    if (count == 0)
    {
        printf("No valid data found!\n");
        break;
    }

    	average = (float)total / count;

		    printf("\n--- Weekly Music Report ---\n");
		    printf("Total: %d minutes\n", total);
		    printf("Average: %.2f minutes\n", average);
	    	printf("Highest: %d minutes\n", highest);

    		break;
			}


            case 3:
                // Ask for confirmation before resetting
                printf("Are you sure you want to reset all data? (y/n): ");
                scanf(" %c", &confirm);

                if (confirm == 'y' || confirm == 'Y')
                {
                    // Clear the array
                    for (i = 0; i < 7; i++)
                    {
                        minutes[i] = 0;
                    }

                    // Clear the file contents
                    fptr = fopen("music_log.txt", "w");

                    if (fptr == NULL)
                    {
                        printf("Error clearing file!\n");
                        break;
                    }

                    fclose(fptr);
                    printf("Weekly data reset successfully!\n");
                }
                else
                {
                    printf("Reset cancelled. Your data is safe.\n");
                }
                break;

            case 4:
                printf("Exiting Music Listening Logger. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

