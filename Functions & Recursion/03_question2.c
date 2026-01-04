/*
    Question 2:
    Write a function that prints "Namaste" if user is Indian & Bonjour if the user is "French"
*/
#include <stdio.h>

void namaste();
void bonjour();

int main() {
    char c;
    printf("Enter i for India and f for French:");
    scanf("%c",&c);
    
    if(c=='i'){
        namaste();
    }
    
    else if(c=='f'){
        bonjour();
    }
    
    else{
        printf("You entered incorrect input");
    }
    return 0;
}

void namaste(){
    printf("Namaste!\n");
}

void bonjour(){
    printf("Bonjour!\n");
}
