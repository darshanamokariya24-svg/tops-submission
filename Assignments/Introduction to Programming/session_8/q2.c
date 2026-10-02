#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *count, char product[])
{	int i;
    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Cart:\n");

    for( i = 0; i < *count; i++)
    {
        printf("%s\n", cart[i]);
    }
}

int main()
{
    char cart[10][50] = {"Shoes", "Watch"};
    int count = 2;

    addToCart(cart, &count, "Kurti");

    return 0;
}
