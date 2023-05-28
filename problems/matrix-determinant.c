/*
Enter elements in matrix of size 3x3: 
1
5
2
6
3
4
7
8
4
Determinant of matrix A = 54 */

#include <stdio.h>
void main()
{
    int A[3][3];
    int row, col;
    int a, b, c, d, e, f, g, h, i;
    long det;

    printf("Enter elements in 3x3 matrix: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
   /* For easy understanding*/
    a = A[0][0];
    b = A[0][1];
    c = A[0][2];
    d = A[1][0];
    e = A[1][1];
    f = A[1][2];
    g = A[2][0];
    h = A[2][1];
    i = A[2][2];
  
    det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));
    printf("Determinant of matrix A = %ld", det);

}