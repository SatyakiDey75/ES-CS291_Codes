// Write a program to find an element using Linear Search.
//
// Output:
//
// Enter the size of array: 4
// Enter the elements of array: 1 2 3 4
// Enter element to find: 4
// Element found at index: 3


#include <stdio.h>
void main()
{
    int a[100],n,key,pos,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to find: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(key==a[i]){
            pos=i;
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at index: %d\n",pos);
    }
    else
    {
        printf("Element not found");   
    }
}