/*
    Question 4:
    Write a function to reverse an array.(2nd method)
*/

#include<stdio.h>

void reverse(int arr[],int n);

void main(){
    int arr[]={1,2,3,4};
    reverse(arr,4);
}

void reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
