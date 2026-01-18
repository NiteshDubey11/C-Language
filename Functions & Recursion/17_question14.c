/*
    Question 14:
    Write a function to print "Hot" or "Cold" depending on the temperature user enters.
*/
#include <stdio.h>

int printtemp(int n);

int main(){
    int n;
    printf("Enter temperature:");
    scanf("%d",&n);
    printtemp(n);
    return 0;
}

int printtemp(int n){
    if(n<100){
        printf("Cold");
    }
    else{
        printf("Hot");
    }
}
