// Write a program to print user's name.
//
// Output:
//
// Enter your name: Virat Kohli
// Your name is Virat Kohli


#include<stdio.h>                   
void main(){                         
    printf("Enter your name: ");   
    char a[100];
    scanf("%[^\n]s",&a);
    printf("Your name is ");
    for (int i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}      