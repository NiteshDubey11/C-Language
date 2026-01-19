/*
    Pointer: A variable that stores the memory address of another variable.
    
    syntax used to write pointers:
    int age = 19;
    int *ptr = &age;    //&age means address of age(memory address)
    int _age = *ptr;    //*ptr means value at address
*/
#include <stdio.h>

int main() {
    int age=19;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d\n",age);
    printf("%d\n",ptr);
    printf("%d",_age);

    return 0;
}
