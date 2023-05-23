// Write a program to print prime numbers from 1 to n. Take input n from keyboard.
//
// Output:
//
// Enter n: 7
// 7 is a prime number.


#include<stdio.h>                   
int prime(int n){
    int f=0;
    for (int i=2;i<n;i++)
        if (n%i==0)
            f=1;
    return f;
}

void main(){                         
    printf("Enter n: ");   
    int i;
    scanf("%d",&i);
    if (prime(i)==0)
        printf("%d is a prime number.",i);
    else
        printf("%d is not a prime number.",i);
}      