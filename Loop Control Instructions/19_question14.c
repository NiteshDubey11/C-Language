/*
    Question 14:
    Print the following pattern using nested loop
    *****
    *****
    *****
    *****
*/
#include <stdio.h>

int main() {
    for(int i=1;i<=4;i++){
        printf("\n");
        for(int j=1;j<=5;j++){
            printf("*");
        }
    }
    return 0;
}
