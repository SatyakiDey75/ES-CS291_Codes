// Write a program to find the largest and second largest element in an array.
// 
// Output:
//
// Enter the size: 4
// Enter the array elements: 12 4 57 17
// The largest element is : 57
// The second largest element is : 17


#include <stdio.h>
void main()
{
    int a[100],j,d,n,max,max2;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]); 
    printf("The largest element is : ");
    max=1;
    for(int i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            j=i;
        }
    }
    printf("%d\n",max);
    if (j+1!=n)
    {
        d=max-a[j+1];
        max2=a[j+1];
    }
    else
    {
        d=max-a[j-1];
        max2=a[j-1];
    }
    for(int i=0;i<n;i++)
        if (d>(max-a[i]) && (max-a[i])!=0)
            max2=a[i];
    printf("The second largest element is : %d",max2);
}
