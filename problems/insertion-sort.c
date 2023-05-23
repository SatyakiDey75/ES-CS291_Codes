// Write a program to sort an array using Bubble Sort
//
// Output:
//
// Enter the size of array: 5
// Enter the array elements: 10 30 4 20 50
// Sorted array: 4      10      20      30      50

#include <stdio.h>
void main()
{
    int a[100], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i=1;i<n;i++)
    {
        int temp=a[i],j=i-1;
        while (temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}