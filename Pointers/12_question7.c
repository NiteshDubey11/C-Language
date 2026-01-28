/*
    Question 7 :
    Write a program in C to find the maximum number between two numbers using a pointer.
*/
#include <stdio.h>

int main(){
    int a,b;
    int *max;
    
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    
    if(a>b){
        max=&a;
    }
    else{
        max=&b;
    }
    
    printf("Maximum number from both is %d",*max);
    
    return 0;
}
