/*
    String function:
    1. gets(str) => inputs a string(dangerous and outdated)
    2. fgets(str,n,file) => inputs a string(new and mostly used)
    3. puts(str) => outputs a string 


*/
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str,100,stdin);
    
    printf("Your entered string is : ");
    puts(str);

    return 0;
}
