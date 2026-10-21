#include <stdio.h>

char tasks[5][100];  // Global array
int main()
{
    int i;

    // Add tasks
    for(i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], 100, stdin);
    }

    // Print all tasks
    printf("\n--- Task List ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s", i + 1, tasks[i]);
    }
}
