// Write a C program to print a two-stair pattern

/* Output:

Enter even no of rows:
8
*      *
**    **
***  ***
********
***  ***
**    **
*      *  */




#include <stdio.h>


void main()
{
    int n;
    printf("Enter odd no of rows:\n");
    scanf("%d",&n);

    int k=0;
    for(int i=0;i<=n/2;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=k;j<=(n)-2;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        k+=2;

        printf("\n");
    }

    int l=2;
    for(int i=1;i<=n/2;i++){
        for(int j=i;j<=n/2;j++){
            printf("*");
        }
        for(int j=0;j<l;j++){
            printf(" ");
        }
         for(int j=i;j<=n/2;j++){
            printf("*");
        }
        l+=2;
        printf("\n");
    }


}

/* To make the program work for even no of rows, slight modification is required*/
