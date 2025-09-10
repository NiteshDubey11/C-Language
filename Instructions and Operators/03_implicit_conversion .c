/*
    implicit conversions
    int + int = int
    float + int = float
    float + float = float
*/

#include <stdio.h>

int main()
{
    printf("%d\n",5*5);
    printf("%f\n",5.0*5);
    printf("%f",5.0*5.0);
    
    return 0;
}
