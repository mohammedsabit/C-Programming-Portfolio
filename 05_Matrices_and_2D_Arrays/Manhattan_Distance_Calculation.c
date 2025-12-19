// Problem: Beautiful Matrix (Codeforces 263A)
// Goal: Calculate the minimum number of moves to bring the number '1' to the center (3,3) of a 5x5 grid.
// Logic: Calculate the "Manhattan Distance" using the formula: |row - 3| + |col - 3|.

#include<stdio.h>
#include<stdlib.h> // Required for abs() function to get absolute difference

int main()
{
    int rows = 5, cols = 5;
    int matrix[rows][cols];

    // Reading the 5x5 Matrix input
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= cols; j++)
        {
            scanf("%d", &matrix[i-1][j-1]);
        }
    }

    // Find the position of '1' and calculate distance
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= cols; j++)
        {
            // Accessing the value (using i-1, j-1 because array index starts at 0)
            int value = matrix[i-1][j-1]; 
            
            if(value == 1)
            {
                // Calculate distance from current position (i, j) to center (3, 3)
                // abs() ensures the result is always positive
                int row_dist = abs(i - 3);
                int col_dist = abs(j - 3);
                
                int steps = row_dist + col_dist;
                printf("%d", steps);
                
                // Once found and printed, we can stop the loop
                break;
            }
        }
    }
    return 0;
}