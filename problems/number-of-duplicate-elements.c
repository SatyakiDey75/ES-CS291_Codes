// Write a program to find number of duplicate elements in array
//
// Output:
//
// Enter the length of array: 5
// Enter value 1: 10
// Enter value 2: 20
// Enter value 3: 20
// Enter value 4: 20
// Enter value 5: 30
// The number of duplicate values in the array is: 3


#include <stdio.h>
void main()
{
    int n,c=0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
                c+=1;
        }
    }
    printf("The number of duplicate values in the array is: %d\n",c);
}