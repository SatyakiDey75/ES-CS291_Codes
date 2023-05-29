// Write a program to check if pair with given sums exist in an array

/* Output:

Enter the size of array: 5
Enter the elements of the Matrix: 
1
5
6
2
7
Enter the target sum: 8
Pair found (1, 7)
Pair found (6, 2)    */

#include<stdio.h>
void main() {
    
    int n,t, i, j,flag=0;

    printf("Enter the size of array: ");
    scanf("%d", & n);

    printf("Enter the elements of the Matrix: \n");

    int a[100];
    for (i = 0; i < n; i++) {    
        scanf("%d", & a[i]);   
    }

    printf("Enter the target sum: ");
    scanf("%d", & t);

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if(a[i]+a[j]==t){
                printf("Pair found (%d, %d)\n", a[i], a[j]);
                flag++;
                break;
            }
        }
    }

    if(flag==0){
        printf("\n Pair Not found");
    }


}
