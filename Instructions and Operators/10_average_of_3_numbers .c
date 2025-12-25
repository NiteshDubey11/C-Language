/*
    Program to print the average of three numbers.
    average = sum of numbers/count of numbers

*/
#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("enter a:");
    scanf("%d",&a);
    
    printf("enter b:");
    scanf("%d",&b);
    
    printf("enter c:");
    scanf("%d",&c);
    
    printf("the Average of above three numbers are:%d",(a+b+c)/3);
    return 0;
}
