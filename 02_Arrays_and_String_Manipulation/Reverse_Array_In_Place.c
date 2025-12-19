// Topic: Data Manipulation
// Problem: Reverse an array in-place.
// Logic: Using the "Two-Pointer Technique". One pointer starts at the beginning (left),
// the other at the end (right). We swap values and move pointers inward.

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Input size

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Two-Pointer Logic
    int left_index = 0;
    int right_index = n - 1;
    int temp_val;

    while(left_index < right_index)
    {
        // Swap values
        temp_val = arr[left_index];
        arr[left_index] = arr[right_index];
        arr[right_index] = temp_val;

        // Move pointers
        left_index++;
        right_index--;
    }

    // Print reversed array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}