/*
    Question 9:
    Write a function to convert celsius to fahrenheit.
    
    NOTE:fahrenheit=(celsius*9/5)+32
*/
#include <stdio.h>

float converttemp(float c);

int main() {
    float c;
    printf("Enter temperature in celsius:");
    scanf("%f",&c);
    printf("The Temperature in Fahrenheit is:%.2f",converttemp(c));
    return 0;
}

float converttemp(float c){
    float f=c*(9.0/5.0)+32;
    return f;
}
