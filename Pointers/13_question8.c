/*
    Question 8:
    Write a program in C to print all the letters in english alphabet using a pointer.
*/
#include <stdio.h>

int main() {
    char alphabet[]="abcdefghijklmnopqrstuvwxyz";
    char *ptr=alphabet;
    
    while(*ptr !='\0'){
        printf("%c ",*ptr);
        ptr++;
    }

    return 0;
}
