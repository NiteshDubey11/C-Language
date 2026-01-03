/*
    Question 7:
    Keep taking numbers as input from user until user enters an odd number
*/
#include <stdio.h>

int main(){
    int a;
    do{
        printf("Enter number:");
        scanf("%d",&a);
        if(a%2!=0){
            break;
        }
    }while(1);
    printf("You entered an odd number");
    
    return 0;
}
