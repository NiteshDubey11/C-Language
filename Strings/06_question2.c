/*
    Question 2:
    Make a program that inputs user's name & prints its length.
*/

#include <stdio.h>

int printlength(char arr[]);

int main()
{
    char firstName[100];
    printf("Enter your name : ");
    fgets(firstName,100,stdin);
    
    printf("You have total of %d letters in your name.",printlength(firstName));

    return 0;
}

int printlength(char arr[]){
    int count=0;
    
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
