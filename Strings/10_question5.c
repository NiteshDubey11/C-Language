/*
    Question 5:
    Write a function named slice, which takes a string & returns a sliced string from index n to m.
*/

#include <stdio.h>
#include <string.h>

void slice(char str[],int n,int m);

void main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s",&str);
    
    slice(str,0,5);
}

void slice(char str[],int n,int m){
    char newstr[200];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
