
#include <stdio.h>

int main()
{
    int a[10], i, j, temp;
    int max, min, sum = 0;
    float mean;

    // Input 10 integers
    for(i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    // Find maximum, minimum and sum
    for(i = 0; i < 10; i++)
    {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];

        sum = sum + a[i];
    }

    mean = sum / 10.0;

    // Sort in ascending order
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display results
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nArithmetic Mean = %.2f", mean);

    printf("\nSorted Array: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    // Compare mean with midpoint
    //changes made here
    
  

   double midpoint = (double)min / 2.0 + (double)max / 2.0;

	if(mean < midpoint)
    printf("\nMean is closer to the minimum.");
	
	else if(mean > midpoint)
    printf("\nMean is closer to the maximum.");
	
	else
    printf("\nMean is exactly midway between them.");
    
}

