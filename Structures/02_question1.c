/*
    Question 1 :
    Write a program to store the data of 3 students.
*/
#include <stdio.h>
#include <string.h>

struct student{
    int roll_no;
    char name[100];
    float cgpa;
};

void main(){
    
    //Student 1 :
    struct student s1;
    s1.roll_no=101;
    strcpy(s1.name,"Nitesh");
    s1.cgpa=9.5;
    
    printf("Student roll no. : %d\n",s1.roll_no);
    printf("Student name : %s\n",s1.name);
    printf("Student cgpa : %.2f\n",s1.cgpa);
    printf("\n");
    
    
    //Student 2 :
    struct student s2;
    s2.roll_no=102;
    strcpy(s2.name,"Aayush");
    s2.cgpa=8.5;
    
    printf("Student roll no. : %d\n",s2.roll_no);
    printf("Student name : %s\n",s2.name);
    printf("Student cgpa : %.2f\n",s2.cgpa);
    printf("\n");
    
    
    //Student 3 :
    struct student s3;
    s3.roll_no=103;
    strcpy(s3.name,"Aditya");
    s3.cgpa=7.5;
    
    printf("Student roll no. : %d\n",s3.roll_no);
    printf("Student name : %s\n",s3.name);
    printf("Student cgpa : %.2f\n",s3.cgpa);
}
