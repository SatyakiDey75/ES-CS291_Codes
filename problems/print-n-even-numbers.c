// Write a program to print even numbers from 1 to n. Take input n from keyboard.
//
// Output:
//
// Enter n: 10
// The even numbers from 1 to 10 are:
// 2       4       6       8       10


#include<stdio.h>                   
void main(){                         
    printf("Enter n: ");   
    int n;
    scanf("%d",&n);
    printf("The even numbers from 1 to %d are:\n",n);
    for (int i=2;i<=n;i+=2)
    {
        printf("%d\t",i);
    }
}      