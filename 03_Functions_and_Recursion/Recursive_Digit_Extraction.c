// Topic: Recursion & Stack Memory
// Problem: Separate and print digits of a number using Recursion.
// Logic: Repeatedly dividing by 10 to reach the first digit, then printing while returning from the stack.

#include <stdio.h>

void print_digits(int n)
{
    // Base Case: If number becomes 0, stop recursion
    if (n == 0)
    {
        return;
    }
    
    int digit = n % 10; // Extract last digit
    
    // Recursive Call: Process the remaining digits first
    print_digits(n / 10);
    
    // Print digits as the stack unwinds (Forward order)
    printf("%d ", digit);
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        int n;
        scanf("%d", &n);
        
        // Edge case for 0
        if(n == 0)
        {
            printf("%d", 0);
        }
        else
        {
            print_digits(n);
        }
        printf("\n");
    }
    return 0;
}