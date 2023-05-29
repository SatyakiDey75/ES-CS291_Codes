//Write a C program to find transpose of a square matrix

/* Output:

Enter the no of rows and columns: 3
Enter the elements of the Matrix: 
1
2
3
4
5
6
7
8
9
The Orginal of the Matrices is: 
1       2       3
4       5       6
7       8       9
The Transpose of the Matrices is:
1       4       7
2       5       8
3       6       9  */


#include<stdio.h>
void main() {
    
    int r, i, j;

    printf("Enter the no of rows and columns: ");
    scanf("%d", & r);


    printf("Enter the elements of the Matrix: \n");

    int a[r][r], trans[r][r];
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", & a[i][j]);
        }
    }


    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            trans[i][j]=a[j][i];
            
        }
    }
    printf("The Orginal of the Matrices is: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose of the Matrices is: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}
