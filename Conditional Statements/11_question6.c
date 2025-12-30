/*
    Question 6:
    Write a program to check if the given number is a natural number
    
    NOTE:Natural Number starts from 1
*/

#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    
    if(a>0){
        printf("The Entered Number is a Natural Number");
    }
    else{
        printf("The Entered Number is not a Natural Number");
    }
    return 0;
}
