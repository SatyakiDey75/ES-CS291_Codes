// Write a program to find the Perfect numbers in a range of given numbers. 
//
// Output:
//
// Enter lower limit: 5
// Enter upper limit: 500
// 6       28      496     is/are the perfect numbers in the range.


#include <stdio.h>
int perf(int n)
{
    int s=0;
    for (int i=1;i<=n/2;i++)
    {
        if (n%i==0)
        {
            s+=i;
        }
    }
    if (n==s)
        return 1;

}
void main()
{
    int n,a,c=0;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper limit: ");
    scanf("%d",&n);
    if (a==1)
        a=2;
    for (int i=a;i<=n;i++)
    {
        if (perf(i)==1)
        {
            printf("%d\t",i);
            c=1;
        }
    }
    if (c==1)
        printf("is/are the perfect numbers in the range.");
    else
        printf("There are no perfect numbers in the range.");
}