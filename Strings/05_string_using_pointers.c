/*
    String declaration using pointers:
    char *str="<String>";
    
    NOTE: 1. char *str="<String>";    //can be reinitialized
          2. char str[]="<string>";   //can't be reinitialized 

*/

#include <stdio.h>

int main()
{
    char *canchange="Nitesh Dubey";
    puts(canchange);
    canchange="Nitesh";
    puts(canchange);
    
    printf("\n");
  
    char cannotchange[]="Nitesh Dubey";
    puts(cannotchange);
    //cannotchange[]="Dubey";  => Causes an error 
  
    return 0;
}
