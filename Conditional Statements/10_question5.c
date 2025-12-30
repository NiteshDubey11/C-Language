/*
    Question 5:
    Write a program to check if a given number is Armstrong number of not.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int a,temp,sum=0,rem;
    printf("Enter 3 digit number:");
    scanf("%d",&a);
    temp=a;
    while(a>0){
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    
    if(sum==temp){
        printf("Entered number is an Armstrong Number");
    }
    else{
        printf("Entered number is not an Armstrong Number");
    }
    return 0;   
}
