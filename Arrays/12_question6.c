/*
    Question 6:
    Create a 2D array, storing the tables of 2 & 3.
*/

#include<stdio.h>

void table(int arr[][10],int m,int n,int number);

void main(){
    int arr[2][10];
    table(arr,0,10,2);
    printf("\n");
    table(arr,1,10,3);
}

void table(int arr[][10],int m,int n,int number){
    for (int i=0;i<n;i++){
        arr[m][n]=number*(i+1);
        printf("%d\t",arr[m][n]);
                        }
}
