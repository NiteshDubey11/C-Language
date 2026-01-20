/*
    Format specifier for pointers:
    %p(pointer) -> for specifying exact value of pointer in hexadecimal number system
    %u(unsigned int) -> for specifying exact value of pointer in integer or decimal number system
*/
#include <stdio.h>

int main() {
    int age=22;
    int *ptr=&age;
    
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);

    return 0;
}
