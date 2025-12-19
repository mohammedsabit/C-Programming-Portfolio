// Topic: Recursion (Mathematical Logic)
// Problem: Calculate Factorial of N using Recursion.
// Logic: Using the mathematical definition n! = n * (n-1)!

#include<stdio.h>

long long int factorial(int n)
{
    // Base Case: Factorial of 1 is 1
    if(n == 1)
    {
        return 1;
    }
    
    // Recursive Call: Multiply n with factorial of (n-1)
    long long int previous_result = factorial(n - 1);
    return previous_result * n;
}

int main()
{
    int n;
    scanf("%d", &n); // Input number
    
    long long int result = factorial(n);
    printf("%lld", result);
    
    return 0;
}