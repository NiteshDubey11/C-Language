/*
    Format for Switch Case Statement:
    
    switch(number){
    case c1://do something
        break;
    case c2://do something
        break;
    default://do something    //Executed when none the cases gets TRUE
    }
    
    NOTE:If the first case gets TRUE,then all the other cases after it,
    will also be executed,therefore in order to avoid such mistakes and execute only that particular condition,we use break statements.

*/
#include <stdio.h>

int main() {
    int day;
    printf("Enter Day(1-7):");
    scanf("%d",&day);
    
    switch(day){
        case 1:printf("Monday");
               break;    
        case 2:printf("Tuesday");
               break;    
        case 3:printf("Wednesday");
               break;    
        case 4:printf("Thursday");
               break;    
        case 5:printf("Friday");
               break;    
        case 6:printf("Saturday");
               break;    
        case 7:printf("Sunday");
               break;    
        default:printf("not a valid day!");
    }
  
    return 0;
}
