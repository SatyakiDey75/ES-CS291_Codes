// Write a program to print Fibonacci series upto n terms.
//
// Output:
//
// Enter number of terms: 10
// Fibonacci series upto 10 terms:
// 0  1  1  2  3  5  8  13  21  34


#include<stdio.h> 
void main(){                         
    printf("Enter number of terms: ");   
    int n,a=0,b=1,c=a+b; 
    scanf("%d",&n);
    printf("Fibonacci series upto %d terms:\n",n);
    for (int i=0;i<n;i++)
    {
        printf("%d  ",a);
        a=b,b=c,c=a+b;
    }
}      