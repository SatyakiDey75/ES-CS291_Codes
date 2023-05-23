// Write a program to check if a user given character is vowel or not.
//
// Output:
//
// Enter a character: I
// I is a vowel.

#include<stdio.h> 
#include <ctype.h>

void main(){                         
    printf("Enter a character: ");   
    char s; 
    scanf("%c",&s);
    char a=tolower(s);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        printf("%c is a vowel.",s); 
    else
        printf("%c is not a vowel.",s);
}      