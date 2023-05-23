// Write a program to perform addition and substraction of 2 numbers using switch case statement.
//
// Output:
//
// Enter 2 numbers: 7 5
// Enter 1 for addition, 2 for substraction: 1
// The sum of 7 and 5 is 12.

#include<stdio.h> 

void main(){                         
    printf("Enter 2 numbers: ");   
    int a,b,ch;
    scanf("%d %d",&a,&b);
    printf("Enter 1 for addition, 2 for substraction: "); 
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("The sum of %d and %d is %d.",a,b,a+b); 
        break;
    case 2:
        printf("The difference of %d and %d is %d.",a,b,a-b); 
        break;
    default:
        printf("Invalid Input");
        break;
    }
}      