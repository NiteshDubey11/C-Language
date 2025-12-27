/*
    Format of if-else statement:
    
    if(condition){
        //do something if the condition is TRUE
    }
    else{
    //do something if the condition is FALSE
    }

*/
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    
if(age<18){
    printf("not an adult\n");
    printf("Not eligible for vote\n");
    printf("not eligible for driving license\n");
}
else{
    printf("an adult\n");
    printf("eligible for vote\n");
    printf("eligible for driving license\n");
    
}

    return 0;
}
