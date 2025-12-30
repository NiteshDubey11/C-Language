/*
    Question 3:
    == stands for comparison
    = stands for assignment
    
    therefore in if statement,x=2 assigns x as non zero value that is 2 and doesn't compares with 2.
    
    NOTE:In if statement nonzero value indicates TRUE and zero value indicates FALSE 
*/

#include <stdio.h>

int main() {
    int x=2;
    if(x=1){
        printf("x is equal to 1");
    }
    else{
        printf("x is not equal to 1");
    }
    return 0;
}
