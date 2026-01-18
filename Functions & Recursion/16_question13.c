/*
    Question 13:
    Write a function to find square root of a number.
*/
#include <stdio.h>
#include <math.h>

int sqrtofnumber(int n);

int main() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("The squareroot of a number is:%d",sqrtofnumber(n));

    return 0;
}

int sqrtofnumber(int n){
    return sqrt(n);
}
