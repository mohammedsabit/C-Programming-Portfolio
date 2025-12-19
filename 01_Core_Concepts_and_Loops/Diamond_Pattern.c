// Topic: Pattern Printing
// Problem: Print a Diamond Shape using stars (*) and spaces.
// Logic: Divided into two parts: Upper Triangle (Growing) and Lower Triangle (Shrinking).

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Input number of rows for half the diamond

    int star_count = 1;
    int space_count = n - 1;

    // Part 1: Upper Triangle
    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int j = 1; j <= space_count; j++)
        {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= star_count; j++)
        {
            printf("*");
        }
        printf("\n");
        
        // Prepare for next row (Stars increase by 2, Spaces decrease by 1)
        star_count += 2;
        space_count--;
    }

    // Part 2: Lower Inverted Triangle
    // Reset counters for the widest row logic
    int star_lower = 2 * n - 1;
    int space_lower = 0;

    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int j = 1; j <= space_lower; j++)
        {
            printf(" ");
        }
        // Print stars
        for(int j = 1; j <= star_lower; j++)
        {
            printf("*");
        }
        printf("\n");
        
        // Prepare for next row (Stars decrease by 2, Spaces increase by 1)
        star_lower -= 2;
        space_lower++;
    }

    return 0;
}