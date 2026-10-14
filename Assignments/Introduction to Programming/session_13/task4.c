#include <stdio.h>
void main()
{
    FILE *fptr;
    char song[200];
    char temp[200];
    int i, j, found;

    fptr = fopen("playlist.txt", "r");

    if (fptr == NULL)
    {
        printf("File not found!");
        return 1;
    }

    while (fgets(song, sizeof(song), fptr) != NULL)
    {
        strcpy(temp, song);

        for (i = 0; temp[i] != '\0'; i++)
        {
            temp[i] = tolower((unsigned char)temp[i]);
        }

        if (strstr(temp, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(fptr);
    
}
