/*
    Question 6 :
    Write a function to calculate the sum,product and average of 2 numbers,and print them in main function.
*/
#include <stdio.h>

void printspa(int a,int b,int *sum,int *prod,int *avg);

int main(){
    int a=3,b=5;
    int sum,prod,avg;
    printspa(a,b,&sum,&prod,&avg);
    printf("sum = %d, product = %d, average = %d",sum,prod,avg);
    
    return 0;
}

void printspa(int a,int b,int *sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}
