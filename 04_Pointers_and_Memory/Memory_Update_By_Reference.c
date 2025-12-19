// Topic: Pointers
// Problem: Update a variable's value in a different function scope.
// Logic: Using "Pass by Reference". We pass the address of the variable, 
// allowing the function to modify the original memory location.

#include<stdio.h>

void update_value(int* ptr)
{
    // Dereference the pointer to modify the value at that address
    *ptr = 20;
}

int main()
{
    int x = 10;
    
    // Pass the address of x
    update_value(&x);
    
    printf("%d", x); // Output will be 20
    return 0;
}