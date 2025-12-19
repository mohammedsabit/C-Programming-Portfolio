// Topic: Array Traversal via Recursion
// Problem: Find the Maximum value in an array without using loops.
// Logic: Compare current element with the maximum of the remaining array.

#include<stdio.h>

int find_max(int arr[], int n, int index)
{
    // Base Case: Reached the last element
    if(index == n - 1)
    {
        return arr[index];
    }

    // Recursive Step: Find max in the rest of the array
    int max_in_rest = find_max(arr, n, index + 1);
    
    // Compare current element with the max of the rest
    if(max_in_rest > arr[index])
    {
        return max_in_rest;
    }
    else
    {
        return arr[index];
    }
}

int main()
{
    int n;
    scanf("%d", &n); // Array Size

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = find_max(arr, n, 0); // Start from index 0
    printf("%d", result);
    
    return 0;
}