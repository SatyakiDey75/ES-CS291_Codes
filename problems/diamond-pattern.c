// Write a program to display the diamond pattern.
//
// Ouput:   
//
// Enter the number of rows. It should be odd: 5   
//   *  
//  *** 
// *****
//  *** 
//   *  


#include <stdio.h>

void main()
{
    int r;
    printf("Enter the number of rows. It should be odd: ");
    scanf("%d",&r);

    int c=r,d=1;
    for (int i=1;i<=r/2+1;i++)
    {
        for (int j=1;j<=c/2;j++)
            printf(" ");
        for (int j=1;j<=d;j++)
            printf("*");
        for (int j=1;j<=c/2;j++)
            printf(" ");
        c-=2;
        d+=2;
        printf("\n");
    }
    int f=2,e=r-2;
    for (int i=r/2;i>0;i--)
    {
        for (int j=1;j<=f/2;j++)
            printf(" ");
        for (int j=1;j<=e;j++)
            printf("*");
        for (int j=1;j<=f/2;j++)
            printf(" ");
        f+=2;
        e-=2;
        printf("\n");
    }

}