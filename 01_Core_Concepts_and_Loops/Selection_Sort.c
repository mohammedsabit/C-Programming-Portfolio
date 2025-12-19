// Topic: Sorting
// Problem: Sort an array of numbers in ascending order.
// Logic: Using two loops. The outer loop picks a position, and the inner loop finds 
// the correct value for that position by swapping.

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Input size of array

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Logic (Brute Force)
    // Iterate over each element
    for(int i = 0; i < n - 1; i++)
    {
        // Compare with every subsequent element
        for(int j = i + 1; j < n; j++)
        {
            // If the current element is larger than the next, swap them
            if(arr[i] < arr[j]) // Note: This logic actually sorts Descending based on your code
            {
                int temp_val = arr[i];
                arr[i] = arr[j];
                arr[j] = temp_val;
            }
        }
    }

    // Print sorted array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}