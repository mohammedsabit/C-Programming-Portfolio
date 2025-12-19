// Topic: Basic Math Logic
// Problem: Print all divisors of a given number N.
// Logic: A divisor divides the number with 0 remainder. We iterate from 1 to N.

#include<stdio.h>

int main()
{
    int input_num;
    scanf("%d", &input_num);

    for(int i = 1; i <= input_num; i++)
    {
        // Check if 'i' is a divisor
        if(input_num % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}