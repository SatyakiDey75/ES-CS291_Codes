// Write a program to print the sum of the series: 1 + 11 + 111 + 1111 + ... n terms. 
// Take input n from keyboard.
//
// Output:
//
// Enter n: 5
// The result is: 12345


#include <stdio.h>
void main()
{
    int n,s=1,a=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        a+=s;
        s=s*10+1;
    }
    printf("The result is: %d",a);
}
