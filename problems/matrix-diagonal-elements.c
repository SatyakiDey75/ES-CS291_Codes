// Write a program to print the diagonal elements of a matrix.
//
// Output:
//
// Enter the number of rows: 3
// Enter elements of matrix: 1 2 3 4 5 6 7 8 9
// The diagonal elements of the matrix are: 
// 1
//         5
//                 9


#include <stdio.h>
void main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int a[r][r];
    printf("Enter elements of matrix: ");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            scanf("%d", &a[i][j]);

    printf("The diagonal elements of the matrix are: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i==j)
                printf("%d\t", a[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
}
