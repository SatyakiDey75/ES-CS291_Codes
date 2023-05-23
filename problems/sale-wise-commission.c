// Write a program to print sale wise commission as per the sales amount given as input.
//          Sale                    Commission
//          < 100                   Zero
//          100 <= sale < 1000      10% of sale
//          sale >= 1000            Rs. 100 + 8% of sale above 1000
//
// Output:
//
// Enter sales amount: 700
// Your commission is Rs. 70.00.

#include<stdio.h> 

void main(){                         
    printf("Enter sales amount: ");   
    int s;
    scanf("%d",&s);
    if (s<100)
        printf("Your commission is Rs. 0.");
    else if (s<1000)
        printf("Your commission is Rs. %.2f.",s/10.0);
    else
        printf("Your commission is Rs. %.2f.",(100+((s-1000)*0.08)));
}      