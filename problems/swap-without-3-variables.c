// Write a program to swap 2 numbers without using 3rd variable.
//
// Output:
//
// Enter 2 numbers: 5 10
// Before swapping: a=5    b=10
// After swapping: a=10    b=5

#include<stdio.h> 

void main(){                         
    printf("Enter 2 numbers: ");   
    int c,a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d\tb=%d\n",a,b);
    a=a-b,b=a+b,a=b-a;
    printf("After swapping: a=%d\tb=%d\n",a,b);
}      