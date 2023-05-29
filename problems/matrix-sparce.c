//Write a C program to check if a matrix is sparce or not. 
//Logic: No of zero elements more than  non-zero elements.

/* Output:

Enter the no of rows and columns: 2
3
Enter the elements of the Matrix:
1
0
2
0
0
0


1       0       2
0       0       0
Sparse Matrix         */




#include<stdio.h>
void main() {
    
    int r,c, i, j,zero=0,nat=0;

    printf("Enter the no of rows and columns: ");
    scanf("%d", & r);
    scanf("%d", & c);

    printf("Enter the elements of the Matrix: \n");

    int a[r][c];
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if(a[i][j]==0){
                zero++;}
            else{
                nat++;}
        }
        printf("\n");
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    if(zero>nat)
        printf("Sparse Matrix \n");
    else
        printf("Non Sparse Matrix \n");

}
