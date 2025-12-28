/*
    Format of else if statement:
    
    if(condition 1){
        //do something if the condition is TRUE
    }
    
    else if(condition 2){
        //do something if the condition 1 is FALSE and condition 2 is TRUE
    }
    
    else{
    //do something if both the conditions are FALSE
    }

*/
#include <stdio.h>

int main() {
    int marks;
    printf("Enter Marks :");
    scanf("%d",&marks);
    
    if(marks>=95){
        printf("grade:A++");
    }
    else if(marks>=90){
        printf("grade:A+");
    }
    else if(marks>=85){
        printf("grade:A");
    }
    else if(marks>=70){
        printf("grade:B");
    }
    else if(marks>=50){
        printf("grade:C");
    }
    else if(marks>=33){
        printf("grade:D");
    }
    else if(marks<33){
        printf("grade:F");
    }
    

    return 0;
}
