#include <stdio.h>
#include <string.h>

char tasks[5][100];  // Global array
int status[5] = {0}; // 0 = Pending, 1 = Done

void markTaskDone(int index)
{
    if(index >= 0 && index < 5)
    {
        status[index] = 1;
    }
}

int main()
{
    int i, taskNo;

    // Enter tasks
    for(i = 0; i < 5; i++)
    {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], 100, stdin);

        tasks[i][strcspn(tasks[i], "\n")] = '\0';
    }

    // Mark a task as done
    printf("\nEnter task number to mark as DONE (1-5): ");
    scanf("%d", &taskNo);

    markTaskDone(taskNo - 1);

    // Print updated list
    printf("\n--- Updated Task List ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s - %s\n", i + 1, tasks[i],
               status[i] ? "DONE" : "PENDING");
    }

}
