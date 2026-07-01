/*
    Array as Function Argument
    
    1.Function declaration:
    void pointnumber(int arr[],int n); //(Here n is a size of array)
                     --------OR---------
    void pointnumber(int *arr , int n); //(Here n is a size of array)

    2.Function call:
    pointnumber(arr,n);
    -------or--------
    pointnumber(&arr[0],n);
    
*/


#include<stdio.h>

void pointnumber(int arr[],int n);

int main(){
    int arr[]= {1,2,3,4,5,6};
    pointnumber(arr,6);

    return 0;
}

void pointnumber(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}
