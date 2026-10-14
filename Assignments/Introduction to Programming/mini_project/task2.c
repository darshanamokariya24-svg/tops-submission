
#include <stdio.h>

int main()
{
    int minutes[7] = {0};
    int choice, i;

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
                // Enter listening minutes for each day
                for (i = 0; i < 7; i++)
                {
                    printf("Enter minutes for day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }
                printf("Listening minutes saved successfully!\n");
                break;

            case 2:
            {
                int total = 0;

                // Display weekly listening summary
                printf("\n--- Weekly Summary ---\n");

                for (i = 0; i < 7; i++)
                {
                    printf("Day %d: %d minutes\n",
                           i + 1, minutes[i]);

                    total += minutes[i];
                }

                printf("Total listening time: %d minutes\n", total);
                break;
            }

            case 3:
                printf("Exiting Music Listening Logger. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);
}

