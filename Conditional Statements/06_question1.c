/*
    Question 1:
    Write a program to check if a student is passed or failed in exam(0-100).
    marks>30 is PASS
    marks<=30 is FAIL
*/

#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks(0-100):");
    scanf("%d",&marks);
    
    if(marks>30 && marks<=100){
        printf("you are passed in exam");
    }
    else if(marks<=30 && marks>=0){
        printf("You are failed in exam");
    }
    else{
        printf("you entered invalid marks");
    }
}
