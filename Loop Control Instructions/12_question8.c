/*
    Question 8:
    Keep taking numbers as input from user until user enters a number which is multiple of 7
*/
#include <stdio.h>

int main(){
    int a;
    do{
        printf("Enter number:");
        scanf("%d",&a);
        if(a%7==0){
            break;
        }
    }while(1);
    printf("You entered multiple of 7");
    
    return 0;
}
