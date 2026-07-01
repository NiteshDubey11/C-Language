/*
    Question 2:
    Write a function to count the number of odd numbers in an array.
*/
#include<stdio.h>

void countodd(int arr[],int n);

void main(){
    int arr[]={11,20,33,40};
    countodd(arr,4);
    
}

void countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
                    }
                        }
    printf("The number of odds in your array is %d.",count);
    
}
