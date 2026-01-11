/*
    Question 11:
    Write a function to print nth term of the fibonacci sequence.
*/
#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("The %dth term of fibonacci sequence is:%d",n,fibonacci(n));
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fibonacci(n-1);
    int fibNm2=fibonacci(n-2);
    int fibonacci=fibNm1 +fibNm2;
    return fibonacci;
}
