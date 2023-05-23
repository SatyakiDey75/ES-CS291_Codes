// Write a program to display the diamond pattern with spaces.
//
// Ouput:   
//
// Enter rows : 7   
// ********
// ***  ***
// **    **
// *      *
// **    **
// ***  ***
// ********


#include <stdio.h>
int main() {
    int rows,i,j,k,l;
    printf("Enter rows : ");
    scanf("%d",&rows);
    for(i=(rows/2)+1;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("*");
        }
        for(k=((rows/2)-i+1)*2;k>0;k--){
            printf(" ");
        }
        for(l=i;l>=1;l--){
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=(rows/2)+1;i++){
        for(j=i;j>=1;j--){
            printf("*");
        }
        for(k=((rows/2)-i+1)*2;k>0;k--){
            printf(" ");
        }
        for(l=i;l>=1;l--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
