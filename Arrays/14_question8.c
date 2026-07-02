/*
    Question 8:
    Write a program to print the largest number in an array.
*/

#include<stdio.h>

int main(){
    int arr[5];
    int max=arr[0];
    
    //Input elements for an array
    for(int i=0;i<5;i++){
    printf("Enter %d element:",(i+1));
    scanf("%d",&arr[i]);
                        }
    
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    printf("maximum value in array is: %d",max);
}
