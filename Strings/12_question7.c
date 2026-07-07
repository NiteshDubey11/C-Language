/*
    Question 7:
    Check if a given character is present in a string or not.
*/

#include <stdio.h>

void checkChar(char str[],char ch);

void main()
{
   char ch;
   char str[100];
   
   printf("Enter character : ");
   scanf("%c",&ch);
   
   printf("Enter string : ");
   scanf("%s",&str);
   
   checkChar(str,ch);
   
}

void checkChar(char str[],char ch){
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("Character found in string.");
            break;
        }
    }
}
