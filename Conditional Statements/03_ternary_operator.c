/*
    Format of Ternary operator:
    
    condition ? do something if the condition is TRUE : do something if the condition is FALSE ;


*/
#include <stdio.h>

int main() {
    int age;
    printf("Enter Age:");
    scanf("%d",&age);
    
    age>=18 ? printf("you are adult") : printf("you are child");
    return 0;
}
