/*
    Question 3:
    Write a function that prints a table of a number input by the user
*/
#include <stdio.h>

int printtable(int n);

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printtable(n);
}

int printtable(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
