/*
    "%s" => access specifier for string
*/

#include <stdio.h>

int main() {
    char name[50];
    printf("Enter a string : ");
    scanf("%s",name);
    printf("The string you entered is : %s",name);
    return 0;
}
