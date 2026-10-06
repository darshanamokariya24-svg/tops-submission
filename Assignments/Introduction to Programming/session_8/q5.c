#include <stdio.h>
#include <ctype.h>

void capitalize(char str[])
{
	int i;
    str[0] = toupper(str[0]);
    for(i = 1; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char product[50];
    char username[50];

	printf("Enter Product Name:");
	scanf("%s",&product);
	printf("Enter UserName:");
	scanf("%s",&username);
	
    capitalize(product);
    capitalize(username);

    printf("Product: %s\n", product);
    printf("Username: %s\n", username);

    return 0;
}
