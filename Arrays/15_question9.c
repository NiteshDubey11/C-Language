/*
    Question 9:
    Write a program to insert an element at the end of an array.
*/

#include<stdio.h>

int main(){
    int n=5;
    int arr[6]={10,20,30,40,50};
    
    arr[5]=60;
    n++;
    
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    }
