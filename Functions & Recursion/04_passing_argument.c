/*
    Functions can take sme value & give some value
    1. parameter : The value it takes
    2. return value : The value it returns

    Types of parameter representation:
    1. void printhello();
    2. void printtable(int n);
    3. int sum(int a , int b);
    
    // Find sum of two numbers using functions.
*/
#include <stdio.h>

int sum(int x,int y);

int main() {
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    
    int s=sum(a,b);
    printf("Sum is: %d",s);

    return 0;
}

int sum(int x,int y){
    return x+y;
}
