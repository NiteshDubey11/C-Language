/*
    Question 6:
    Print the table of a number input by the user
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%dX%d=%d\n",n,i,n*i);
    }

    return 0;
}
