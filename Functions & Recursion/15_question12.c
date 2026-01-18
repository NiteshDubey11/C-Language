/*
    Question 12:
    Write a function to find sum of digits of a number.
*/
#include <stdio.h>

int sumofnumbers(int n);

int main() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("The sum of digits of a number are:%d",sumofnumbers(n));

    return 0;
}

int sumofnumbers(int n){
    int sum=0;
    while(n!=0){
    sum+=n%10;
    n/=10;
    }
    return sum;
}
