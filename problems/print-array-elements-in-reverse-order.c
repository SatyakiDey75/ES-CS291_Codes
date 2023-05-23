// Write a program to store n elements in array and print them in reverse order.
//
// Output:
//
// Enter the length of array: 4
// Enter value 1: 10
// Enter value 2: 20
// Enter value 3: 30
// Enter value 4: 40
// The values of the array in reverse order are:
// Value 4: 40
// Value 3: 30
// Value 2: 20
// Value 1: 10


#include <stdio.h>
void main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The values of the array in reverse order are:\n");
    for (int i=n-1;i>=0;i--)
    {
        printf("Value %d: %d\n",i+1,a[i]);
    }
}