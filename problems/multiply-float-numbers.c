// Write a program to multiplying 2 floating point numbers.
//
// Output:
//
// Enter 2 numbers: 3.1 7.7
// Product of 3.10 and 7.70 is 23.87


#include<stdio.h> 

void main(){                         
    printf("Enter 2 numbers: ");   
    float a,b;
    scanf("%f %f",&a,&b);
    printf("Product of %.2f and %.2f is %.2f",a,b,a*b);
}      