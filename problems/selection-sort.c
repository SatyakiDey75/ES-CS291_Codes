// Write a program to sort an array using Selection Sort
//
// Output:
//
// Enter the size of array: 4 
// Enter the array elements: 10 30 40 20
// Sorted array:
// 10      20      30      40

#include <stdio.h>
void main()
{
    int a[100],n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}