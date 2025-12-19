// Topic: Data Type Handling
// Problem: Calculate sum of digits for a number that might exceed standard Integer limits.
// Logic: Read the number as a String, then convert characters '0'-'9' to integers.

#include<stdio.h>

int main()
{   
    int n;
    scanf("%d", &n); // Number of digits
    
    char num_str[n];
    scanf("%s", num_str);
    
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        // Convert ASCII character to integer value
        // Example: '5' (ASCII 53) - '0' (ASCII 48) = 5
        sum += num_str[i] - '0';
    }

    printf("%d", sum);
    return 0;
}