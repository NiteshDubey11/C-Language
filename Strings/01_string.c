/*
    String: A character array terminated by a '\0'(null character).
    null character denotes string termination(end)
*/

#include<stdio.h>

int main(){
    char name[]={'N','I','T','E','S','H'};   //array of characters
    char _name[]={'N','I','T','E','S','H','\0'};   //string
    
    for(int i=0;i<6;i++){
        printf("%c",name[i]);
    }
    
    printf("\n");
    
    for(int i=0;i<6;i++){
        printf("%c",_name[i]);
    }
    
}
