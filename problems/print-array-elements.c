// Write a program to store elements in array and print them. 
//
// Output:
//
// Enter the length of array: 4
// Enter value 1: 10
// Enter value 2: 20
// Enter value 3: 30
// Enter value 4: 40
// The values in the array are:
// Value 1: 10
// Value 2: 20
// Value 3: 30
// Value 4: 40


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
    printf("The values in the array are:\n");
    for (int i=0;i<n;i++)
    {
        printf("Value %d: %d\n",i+1,a[i]);
    }
}