// Write a program to print odd numbers from 1 to n. Take input n from keyboard.
//
// Output:
//
// Enter n: 10
// The odd numbers from 1 to 10 are:
// 1       3       5       7       9


#include<stdio.h>                   
void main(){                         
    printf("Enter n: ");   
    int n;
    scanf("%d",&n);
    printf("The odd numbers from 1 to %d are:\n",n);
    for (int i=1;i<=n;i+=2)
    {
        printf("%d\t",i);
    }
}      