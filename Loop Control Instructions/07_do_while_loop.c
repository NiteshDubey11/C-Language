/*
    Format for "do while loop Instruction":
    
    do{
        //do something
    }while(condition);
    
    //code for printing "Hello World!!!" 10 times
    
*/
#include <stdio.h>

int main() {
    int i=1;
    do{
        printf("Hello World!!!\n");
        i++;
    }while(i<=10);
    return 0;
}
