// Write a program to check if a number is even or odd. Take input n from keyboard.
//
// Output:
//
// Enter a number: 75
// 75 is an odd number.


#include<stdio.h>                   
void main()
{                         
    printf("Enter a number: ");   
    int n;
    scanf("%d",&n);
    if (n%2==0)
        printf("%d is an even number.",n);
    else
        printf("%d is an odd number.",n);
}      