/*
    Question 3:
    write for loop instructions using float counter and character counter.

*/
#include <stdio.h>

int main() {
    for(float i=1.0;i<=5;i++){
        printf("%f\n",i);
    }
    
    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
    
    return 0;
}
