/*
    Question 8:
    Find factorial of n by recursion method.
*/
#include <stdio.h>

int fact(int n);

int main() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("The factorial of %d is:%d",n,fact(n));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=fact(n-1);
    return n*sumNm1;
}
