/*
    Question 3:
    Take a string input from the user using %C.
*/


#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int i=0;
    printf("Enter string : ");
    
    for(i=0;i<99;i++){
        scanf("%c",&str[i]);
        
        if(str[i]=='\n'){
            break;
        }
    }
    
    str[i]='\0';
    puts(str);
    
}
