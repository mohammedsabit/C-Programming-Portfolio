// Topic: Matrix Operations
// Problem: Verify if a matrix is a "Primary Diagonal Matrix".
// Logic: Validates two conditions:
// 1. Must be a Square Matrix (rows == cols).
// 2. All non-diagonal elements (where row != col) must be 0.

#include<stdio.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input Matrix
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(rows == cols)
    {
        int is_diagonal = 1; // Flag: 1 = True, 0 = False
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                // Check non-diagonal elements
                if(i != j)
                {
                    if(matrix[i][j] != 0)
                    {
                        printf("This is not a primary diagonal matrix");
                        is_diagonal = 0;
                        break;
                    }
                }
            }
            if(is_diagonal == 0)
            {
                break;
            }
        }
        
        if(is_diagonal == 1)
        {
            printf("This is a primary diagonal matrix");
        }
    }
    else
    {
        printf("This is not a primary diagonal matrix");
    }
    return 0;
}