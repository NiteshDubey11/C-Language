/*
    Question 7:
    Sum of first n natural numbers.
*/
#include <stdio.h>

int sum(int n);

int main() {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers are:%d",n,sum(n));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}



