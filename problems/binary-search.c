// Write a program to find an element using Binary Search.
// 
// Output:
//
// Enter the size: 4
// Enter the array elements: 1 2 3 4
// Enter element to find: 3
// 3 found at index 2.


#include <stdio.h>
void main()
{
    int a[100],n,key,pos,flag=0;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to find: ");
    scanf("%d",&key);

    int low=0,high=n-1;
    int mid= (low+high)/2;

    while (low <= high) 
    {
        mid = (low + high)/2;
        if (a[mid] < key)
            low = mid + 1;
        else if (a[mid] == key) {
            printf("%d found at index %d.\n", key, mid);
            break;
        }
        else
            high = mid - 1;
    }
    if(high<low)
        printf("%d not found", key);
}
