// Topic: Data Transformation
// Problem: Find the Minimum and Maximum values in a dataset and swap their positions.
// Logic: Linear scan (O(N)) to identify indices, followed by a swap.

#include<stdio.h>
#include<limits.h> // Required for INT_MIN, INT_MAX

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    int max_index = 0;
    int min_index = 0;

    // Identify Min and Max indices
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min_val)
        {
            min_val = arr[i];
            min_index = i;
        }
        
        if(arr[i] > max_val)
        {
            max_val = arr[i];
            max_index = i;
        }
    }

    // Swap Min and Max
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;
    
    // Output modified dataset
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}