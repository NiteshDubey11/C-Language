/*
    Format for Nested if:
    
    if(condition 1){
        //do something if the condition 1 is True
        
        if(condition 2){
            //do something if conditions 1 and 2 are True
        }
    }
    else{
        if(condition 3){
            //do something if none of if(s) matches and the condition 3 gets True
        }
    }
    
    NOTE: 1. else statements can also contain if statements in it.
          2. Nested if:Multiple if(s) statements inside if.
*/

#include <stdio.h>

int main() {
    int number;
    printf("Enter Number:");
    scanf("%d",&number);
    
    if(number>0){
        printf("positive integer\n");
        if(number%2==0){
            printf("Even Number\n");
        }
        else{
            printf("Odd Number\n");
        }
    }
    else{
        printf("Negative Number\n");
    }
  
    return 0;
}
