/*
    Question 2:
    Write a program to give grades to a student
    marks<30 is C
    30<=marks<70 is B
    70<=marks<90 is A
    90<=marks<=100 is A+
*/

#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks(0-100):");
    scanf("%d",&marks);
    
    if(marks<30 && marks>0){
        printf("Grade:C\n");
    }
    if(marks>=30 && marks<70){
        printf("Grade:B\n");
    }
    if(marks>=70 && marks<90){
        printf("Grade:A\n");
    }
    if(marks>=90 && marks<=100){
        printf("Grade:A+\n");
    }
}
