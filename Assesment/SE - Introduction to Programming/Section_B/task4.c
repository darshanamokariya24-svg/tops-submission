
#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense e[10];
    int choice, count = 0, i;
    float total;
    FILE *fp;

    do
    {
        printf("\n--- Personal Expense Tracker ---\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 10)
                {
                    printf("Enter expense category: ");
                    scanf(" %29[^\n]", e[count].category);

                    printf("Enter amount: ");
                    scanf("%f", &e[count].amount);

                    count++;
                    printf("Expense added successfully!\n");
                }
                else
                {
                    printf("Expense list is full!\n");
                }
                break;

            case 2:
                total = 0;

                printf("\n%-20s %10s\n", "Category", "Amount");
                printf("----------------------------------\n");

                for(i = 0; i < count; i++)
                {
                    printf("%-20s %10.2f\n",
                           e[i].category, e[i].amount);

                    total += e[i].amount;
                }

                printf("----------------------------------\n");
                printf("%-20s %10.2f\n", "Total", total);
                break;

            case 3:
                fp = fopen("expenses.txt", "w");

                if(fp == NULL)
                {
                    printf("Error opening file!\n");
                    return 1;
                }

                for(i = 0; i < count; i++)
                {
                    fprintf(fp, "%s,%.2f\n",
                            e[i].category, e[i].amount);
                }

                fclose(fp);

                printf("Expenses saved to expenses.txt\n");
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 3);

}

