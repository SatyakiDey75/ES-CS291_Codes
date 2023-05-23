// Write a program to print Fibonacci series upto n terms using recursion.
//
// Output:
//
// Enter number of terms: 10
// Fibonacci series upto 10 terms:
// 0  1  1  2  3  5  8  13  21  34


#include<stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
void main()
{
    printf("Enter number of terms: ");   
    int n; 
    scanf("%d",&n);
    printf("Fibonacci series upto %d terms:\n",n);
    for (int i=0;i<n;i++)
        printf("%d  ", fib(i));
}