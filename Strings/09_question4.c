/*
    Question 4:
    Find the salted form of a password entered by user if the salt is "123" & added at the end.
*/

#include <stdio.h>
#include <string.h>

void salting(char password[]);

void main()
{
    char password[100];
    printf("Enter password : ");
    scanf("%s",password);
    
    salting(password);   
}

void salting(char password[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    printf("Your salted value is : ");
    puts(newpass);
}
