/*
    Question 4:
    Write a program to find if a character entered by user is upper case or lower case.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    
    if(ch >='A' && ch <='Z'){
        printf("The Entered character is of upper case");
    }
    else if(ch >='a' && ch <='z'){
        printf("The Entered character is of lower case ");
    }
    else{
        printf("Invalid Input(not a english letter)");
    }
    return 0;
}
