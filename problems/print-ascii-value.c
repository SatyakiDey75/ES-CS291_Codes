// Write a program to print the ASCII value of a character.
//
// Output:
//
// Enter a character: a
// The ASCII value of "a" is 97.

#include<stdio.h> 

void main(){                         
    printf("Enter a character: ");   
    char a;
    scanf("%c",&a);
    printf("The ASCII value of \"%c\" is %d.",a,a);
}      