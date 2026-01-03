/*
    Question 11:
    Print the factorial of a number n
*/
#include <stdio.h>

int main(){
    int n,fact=1;
    
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
        }
        printf("The factorial of provided n is:%d\n",fact);
    
    return 0;
}
