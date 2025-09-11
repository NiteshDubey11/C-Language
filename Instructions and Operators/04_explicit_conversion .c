/* 
    implicit conversion
    float ==> int
    int ==> float
*/
#include <stdio.h>

int main()
{
    float num = 2.2;
    int x = (int) num;
    printf("%d",x);
    return 0;
}
