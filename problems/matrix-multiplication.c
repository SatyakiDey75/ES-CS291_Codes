// Write a program to multiply two Matrices.
//
// Output:
//
// Enter the number of rows and columns of matrix 1: 2 3 
// Enter the number of rows and columns of matrix 2: 3 3
// Enter elements of 1st matrix: 1 2 3 4 5 6
// Enter elements of 2nd matrix: 1 2 3 4 5 6 7 8 9
// Multiplication of two matrices: 
// 30      36      42
// 66      81      96

#include <stdio.h>
void main()
{
    int r1, c1, r2, c2, i, j;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    if (c1==r2)
    {
        int a[r1][c1],b[r2][c2],mul[r1][c2];
        printf("Enter elements of 1st matrix: ");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of 2nd matrix: ");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("Multiplication of two matrices: \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix multiplication not possible.");
}