// Write a program to print numbers from 1 to n. Take input n from keyboard.
//
// Output:
//
// Enter n: 10
// The numbers from 1 to 10 are:
// 1       2       3       4       5       6       7       8       9       10


#include<stdio.h>                   
void main(){                         
    printf("Enter n: ");   
    int n;
    scanf("%d",&n);
    printf("The numbers from 1 to %d are:\n",n);
    for (int i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
}      