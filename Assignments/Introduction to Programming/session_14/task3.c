#include <stdio.h>

// Function to format the followers count
void formatFollowersCount(int count)
{
    if (count >= 1000000)
    {
        printf("%.1fM", count / 1000000.0);
    }
    else if (count >= 1000)
    {
        printf("%.1fK", count / 1000.0);
    }
    else
    {
        printf("%d", count);
    }
}

int main()
{
    // Test different follower counts
    printf("Followers: ");
    formatFollowersCount(1500);       // Output: 1.5K

    printf("\nFollowers: ");
    formatFollowersCount(1200000);    // Output: 1.2M

    printf("\nFollowers: ");
    formatFollowersCount(850);        // Output: 850

    return 0;
}
