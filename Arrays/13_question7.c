/*
    Question 7:
    In an array of numbers,find how many times does a number 'x' occurs.
*/

#include<stdio.h>

int main(){
    int arr[5];
    int num;
    int count=0;
    
    //Input elements for an array
    for(int i=0;i<5;i++){
    printf("Enter %d element:",(i+1));
    scanf("%d",&arr[i]);
                        }
    
    printf("Enter number you want to find in array:");
    scanf("%d",&num);
    
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            count++;
        }
    }
    
    printf("count:%d",count);
    
}
