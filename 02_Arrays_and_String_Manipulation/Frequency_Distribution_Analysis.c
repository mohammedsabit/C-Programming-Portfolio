// Problem: Calculate the frequency (count) of specific numbers in a dataset.
// Logic: Using a fixed-size array to count how many times each number appears.

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int data[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    // Initialize frequency array with 0
    int frequency_map[100001] = {0};

    // Count occurrences
    for(int i = 0; i < n; i++)
    {
        int value = data[i];
        frequency_map[value]++;
    }

    // Print the count for numbers 0 to 5
    for(int i = 0; i < 6; i++) 
    {
        if(frequency_map[i] > 0) 
        {
             printf("%d -> %d\n", i, frequency_map[i]);
        }
    }
    return 0;
}