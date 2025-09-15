/*
    Relational operators:
    1. == (equals to)
    2. >,>= (greater than,greater than or equal to)
    3. <,<= (less than ,less than or equal to)
    4. != (not equal to)

    NOTE: 1 represents TRUE,0 represents FALSE
*/
#include <stdio.h>

int main()
{
    printf("%d",4==4); //returns 1 as 4 is equal to 4
    printf("\n%d",4==3); //returns 0 as 4 is not equal to 3
    
    printf("\n%d",3>4); //returns 0 as 3 is not greater than 4
    printf("\n%d",4>3); //returns 1 as 4 is greater than 3
    printf("\n%d",4>4); //returns 0 as 4 is not greater than 4
    printf("\n%d",4>=4); //returns 1 as 4 is equal to 4
    
    printf("\n%d",3<4); //returns 1 as 3 is less than 4
    printf("\n%d",4<3); //returns 0 as 4 is not less than 3
    printf("\n%d",3<3); //returns 0 as 3 is not less than 3
    printf("\n%d",3<=3); //returns 1 as 3 is equal to  3
    
    printf("\n%d",4!=4); //returns 0 as 4 is not equal to 4 is false
    printf("\n%d",4!=3); //returns 1 as 4 is not equal to 3 
    
    return 0;
}
