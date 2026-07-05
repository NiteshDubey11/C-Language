/*
    Question 1 :
    Create a String firstName & lastName to store details of user & print all the characters using a loop.

*/

#include <stdio.h>

int main() {
    char firstName[]="NITESH";
    char lastName[]="DUBEY";
    
    for(int i=0;firstName[i]!='\0';i++){
        printf("%c",firstName[i]);
    }
    
    printf("\n");
    
    for(int i=0;lastName[i]!='\0';i++){
        printf("%c",lastName[i]);
    }
    return 0;
}
