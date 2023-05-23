// Write a program to print prime numbers from 1 to n. Take input n from keyboard.
//
// Output:
//
// Enter n: 7
// The prime numbers from 1 to 7 are:
// 2       3       5       7


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
    int n;
    scanf("%d",&n);
    printf("The prime numbers from 1 to %d are:\n",n);
    for (int i=2;i<=n;i++)
        if (prime(i)==0)
            printf("%d\t",i);
}      