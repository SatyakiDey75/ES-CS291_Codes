// Write a C program to print a hollow diamond pattern

/* Output:
Enter odd no of rows:
9
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *               */

#include <stdio.h>
void main()
{
    int n;
    printf("Enter odd no of rows:\n");
    scanf("%d",&n);

    int k=0;
    for(int i=0;i<n/2+1;i++){
        for(int j=0;j<n/2-i;j++){
            printf(" ");
        }
        printf("*");
        for(int j=0;j<k-1;j++){
            printf(" ");
        }
        if(i>0)
             printf("*");      
        printf("\n");
        k+=2;
    }

     int l=n-4;              /*  Since for 5 odd rows,spaces required in the first line of reverse traingle is 5-4=1,
                               Similarly for 7 odd rows,spaces required in the first line of reverse 
                               traingle is 7-3=1, and so on..*/
    for(int i=0;i<n/2;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        printf("*");
        for(int j=l;j>0;j--){
            printf(" ");
        }
        if(i!=n/2-1)
            printf("*");

        printf("\n");
        l-=2;
    }
  
}
