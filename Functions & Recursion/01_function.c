/*
    Function : Block of code that performs a particular task.
    
    Format for implementing functions in c:
    
    1. function Declarartion:
        >> void printhello();   //tell the compiler
        
    2. function definition:
        >> void printhello(){
            printf("Hello World!!!");   //do the work
        }
    
    3. function call:
        >> int main(){
            printhello();   //use the work
            return 0;
        }
    
    //code to print Hello World using function
*/
#include <stdio.h>

void printhello();                //function declaration

int main() {
    printhello();                 //function call
    
    return 0;
}

void printhello(){                //function definition
    printf("Hello World!!!");
}
