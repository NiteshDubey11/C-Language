/*
    Question 10:
    Write a function to calculate percentage of a student from marks in science,maths and sanskrit.
*/
#include <stdio.h>

float calcpercentage(float science,float maths,float sanskrit);

int main() {
    float science,maths,sanskrit;
    printf("Enter marks of science:");
    scanf("%f",&science);
    printf("Enter marks of maths:");
    scanf("%f",&maths);
    printf("Enter marks of sanskrit:");
    scanf("%f",&sanskrit);
    
    printf("The percentage of provided marks:%.2f",calcpercentage(science,maths,sanskrit));
}

float calcpercentage(float science,float maths,float sanskrit){
    float percentage = ((science+maths+sanskrit)/300)*100;
    return percentage;
}
