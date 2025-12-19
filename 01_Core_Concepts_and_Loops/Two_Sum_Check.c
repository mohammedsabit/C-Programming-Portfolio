// Topic: Array Search
// Problem: Check if any two numbers in the array add up to a target value.
// Logic: Using nested loops to check every possible pair of numbers (Brute Force).

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Input size

    int numbers[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int target_sum;
    scanf("%d", &target_sum); // The value we want to find
    
    // Check every pair (i, j)
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            // If sum matches, print Yes and exit
            if(numbers[i] + numbers[j] == target_sum)
            {
                printf("Yes");
                return 0; // Stop program immediately
            }
        }
    }
    
    // If loop finishes without finding a pair
    printf("No");
    return 0;
}