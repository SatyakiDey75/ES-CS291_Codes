// Write a program to take any numbers and print the corresponding words.
// 
// Output:
//
// Enter any number: 5430540
// The output is: five four three zero five four zero


#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char * nostowords(int n)
{
    switch (n)
    {
        case 0:
            return " zero";
            break;
        case 1:
            return " one";
            break;
        case 2:
            return " two";
            break;
        case 3:
            return " three";
            break;
        case 4:
            return " four";
            break;
        case 5:
            return " five";
            break;
        case 6:
            return " six";
            break;
        case 7:
            return " seven";
            break;
        case 8:
            return " eight";
            break;
        case 9:
            return " nine";
            break;
    }
}

void main()
{
    int n,d=0,f,c;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("The output is:");
    for(int i=n;i>0;i/=10,c++)
    {
        if (i%10==0 && c==0)
            f=1;
        d=d*10+(i%10);
    }
    for(int i=d;i>0;i/=10){
        printf("%s",nostowords(i%10));
    }
    if (f==1)
        printf(" zero");
}
