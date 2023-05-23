// Write a program to find the sum and average of all elements in an array.
//
// Output:
//
// Enter the length of array: 4
// Enter value 1: 10
// Enter value 2: 20
// Enter value 3: 30
// Enter value 4: 40
// The sum of the elements in array is: 100
// The average of the elements in array is: 20.00


#include <stdio.h>
void main()
{
    int n,s=0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("The sum of the elements in array is: %d\n",s);
    printf("The average of the elements in array is: %.2f\n",s/5.0);
}