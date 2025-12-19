// Problem: Check if a specific number 'X' exists in a 2D Matrix.
// Logic: Linear Search - Traverse every cell row by row to find the target.

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input the matrix
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int target;
    scanf("%d", &target);

    bool is_found = false;

    // Search for the target value
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == target)
            {
                is_found = true;
                break; // Found it, break inner loop
            }
        }
        if(is_found == true)
        {
            break; // Found it, break outer loop
        }
    }

    if(is_found == true)
    {
        printf("Element Found");
    }
    else
    {
        printf("Element Not Found");
    }
    return 0;
}