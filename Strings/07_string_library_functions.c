/*
    standard library function for string => <string.h>
    1. strlen(str); -> Counts number of characters excluding '\0'.
    2. strcpy(newStr,oldStr); -> Copies value of old string to  new string.
    3. strcat(firstStr,secondStr); -> Concatenates first string with second string.
    4. strcmp(firstStr,secondStr); -> Compares 2 strings by ascii value and returns a value.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    //1.strlen(str);
    char name[100]="NITESH";
    int length=strlen(name);
    printf("The length of string is : %d",length);
    
    printf("\n");
    
    //2.strcpy(newStr,oldStr);
    char firstStr[100]="NITESH";
    char secondStr[100]="DUBEY";
    strcpy(firstStr,secondStr);
    printf("The copied value from second string to first string is : ");
    puts(firstStr);
    
    //3.strcat(firstStr,secondStr);
    char string1[100]="NITESH";
    char string2[100]="DUBEY";
    strcat(string1,string2);
    printf("The final Concatenated value is : ");
    puts(string1);
    
    //4.strcmp(firstStr,secondstr);
    char first1[]="ABC";
    char second2[]="BAC";
    int comparison=strcmp(first1,second2);
    printf("%d",comparison);
    
}
