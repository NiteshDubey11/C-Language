/*
    Question 12:
    Print reverse of the table for a number n
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(int i=10;i>=1;i--){
        printf("%dX%d=%d\n",n,i,n*i);
    }

    return 0;
}
