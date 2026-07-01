/*
    Question 3:
    Write a function to reverse an array.(1st method)
*/

#include<stdio.h>

void reverse(int arr[],int n);
void printarr(int arr[],int n);

void main(){
    int arr[]={1,2,3,4};
    reverse(arr,4);
    printarr(arr,4);
    
}

void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstnumber=arr[i];
        int secondnumber=arr[n-i-1];
        arr[i]=secondnumber;
        arr[n-i-1]=firstnumber;
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
