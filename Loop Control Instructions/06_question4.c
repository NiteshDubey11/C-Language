/*
    Question 4:
    Print the numbers from 0 to n,if n is given by user
*/
#include <stdio.h>

int main() {
    int i=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
