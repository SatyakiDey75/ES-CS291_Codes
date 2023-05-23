// Write a program to add two Matrices.
//
// Output:
//
// Enter the number of rows and columns: 2 2
// Enter elements of 1st matrix: 1 2 3 4
// Enter elements of 2nd matrix: 1 2 3 4
// Sum of two matrices: 
// 2       4
// 6       8

#include <stdio.h>
void main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &r);
    scanf("%d", &c);

    printf("Enter elements of 1st matrix: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix: ");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }

    // adding two matrices
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // printing the result
    printf("Sum of two matrices: \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
