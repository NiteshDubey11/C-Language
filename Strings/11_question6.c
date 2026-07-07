/*
    Question 6:
    Write a function to count the occurrence of vowels in a string.
*/

#include <stdio.h>

int countVowels(char str[]);

void main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s",&str);
    
    printf("The total number of vowels in entered string is : %d",countVowels(str));
}

int countVowels(char str[]){
    int count=0;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}
