// Topic: Modular Programming
// Problem: Sort an array using a dedicated function.
// Logic: Encapsulating the sorting logic inside a function for reusability.

#include<stdio.h>

// User-defined function to sort the array
void sort_array(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            // Swap if current element is greater than next
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n); // Input Size

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the sorting function
    sort_array(arr, n);

    // Print sorted array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}