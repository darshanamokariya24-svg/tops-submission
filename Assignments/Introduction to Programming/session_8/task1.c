#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[])
{
    int i;

    printf("Initials: ");

    for (i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }
}

int main()
{
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    getUserInitials(name);

    return 0;
}
