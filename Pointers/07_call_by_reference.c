/*
    Call by reference : We pass address of variable as an argument.
    
    NOTE : it permanently changes the value in the main function.
*/
#include <stdio.h>

int square(int *n); 

int main() {
    int n=5;
    square(&n);
    printf("number = %d",n);
    
    return 0;
}

int square(int *n){
    *n =(*n) * (*n);
    printf("square = %d\n",*n);
}
