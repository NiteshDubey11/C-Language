/*
    Question 8:
    Write a program to convert all lowercase vowels to uppercase in a string.
*/

#include <stdio.h>
#include <string.h>

void upperCase(char str[]);

void main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str,100,stdin);
    
    upperCase(str);
}

void upperCase(char str[]){
    for(int i=0;str[i]!='\n';i++){
        
        if(str[i]=='a'){
            str[i]='A';
        }
    
        if(str[i]=='e'){
            str[i]='E';
        }
        
        if(str[i]=='i'){
            str[i]='I';
        }
        
        if(str[i]=='o'){
            str[i]='O';
        }
        
        if(str[i]=='u'){
            str[i]='U';
        }
    }
    puts(str);
}
