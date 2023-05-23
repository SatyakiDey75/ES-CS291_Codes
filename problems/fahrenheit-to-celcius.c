// Write a program to convert temperature from Fahrenheit to Celcius.
//
// Output:
//
// Enter temperature in Fahrenheit: 96
// Temperature in Celcius is: 35.56 C.

#include<stdio.h> 

void main(){                         
    printf("Enter temperature in Fahrenheit: ");   
    float f,c;
    scanf("%f",&f);
    printf("Temperature in Celcius is: %.2f C.",((f-32)*5)/9);
}      