// Write a program to find the Armstrong numbers in a range of given numbers. 
//
// Output:
//
// Enter lower limit: 5
// Enter upper limit: 500
// 153     370     371     407     is/are the armstrong numbers in the range.


#include <stdio.h>
int arm(int n)
{
    int s=0,c=0,d;
    for (int i=n;i>0;i/=10)
        c+=1;
    for (int i=n;i>0;i/=10)
    {
        d=i%10;
        int v=d;
        for (int i=1;i<c;i++)
            v*=d;
        s+=v;
    }
    if (n==s && (n<2 || n>9))
        return 1;


}
void main()
{
    int n,a,c=0;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter upper limit: ");
    scanf("%d",&n);
    arm(n);
    for (int i=a;i<=n;i++)
    {
        if (arm(i)==1)
        {
            printf("%d\t",i);
            c=1;
        }
    }
    if (c==1)
        printf("is/are the armstrong numbers in the range.");
    else
        printf("There are no armstrong numbers in the range.");
}