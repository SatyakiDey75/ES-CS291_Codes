// Write a program to check whether a year is leap year or not.
//
// Output:
//
// Enter a year: 1992
// 1992 is a leap year.

#include<stdio.h> 

void main(){                         
    printf("Enter a year: ");   
    int n,a=0,s=1;
    scanf("%d",&n);
    if ((n%4==0 && n%100!=0) || (n%400==0))
        printf("%d is a leap year.",n);
    else
        printf("%d is not a leap year.",n);
}      