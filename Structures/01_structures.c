/*
    Structures: A collection of values of different data types.
    
    Syntax: struct student{
        char name[100];
        int roll;
        float cgpa;  
        }
*/
#include <stdio.h>
#include <string.h>

struct student{
    int roll_no;
    char name[100];
    float cgpa;
};

void main(){
    struct student s1;
    s1.roll_no=101;
    strcpy(s1.name,"Nitesh");
    s1.cgpa=9.5;
    
    printf("Student roll no. : %d\n",s1.roll_no);
    printf("Student name : %s\n",s1.name);
    printf("Student cgpa : %.2f\n",s1.cgpa);
}
