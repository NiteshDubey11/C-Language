/*
    Recursion : When a function calls itself, it's called recursion.
    
    Properties of Recursion:
    1. Anything that can be done with Iteration, can be done with recursion and vice-versa.
    2. Recursion can sometimes give the most simple solution.
    3. Base Case is the condition which stops recursion.
    4. Iteration has infinite loop & Recursion has stack overflow.
    
    //Write a C program to print 'Hello World!!!' a given number of times using recursion.
*/
#include <stdio.h>

void printhw(int count);

int main() {
    int count;
    printf("Enter count of outputs you want:");
    scanf("%d",&count);
    printhw(count);

    return 0;
}

void printhw(int count){
    if(count==0){
        return;
    }
    printf("Hello World!!!\n");
    printhw(count-1);
}
