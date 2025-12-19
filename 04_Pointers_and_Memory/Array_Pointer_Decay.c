// Topic: Modular Programming & Memory
// Problem: Pass an array to a function and iterate through it.
// Insight: In C, arrays "decay" into pointers when passed to functions. 
// This means the function receives a reference, not a copy of the whole array.

#include<stdio.h>

void print_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n); // Input size

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_array(arr, n);
    
    return 0;
}