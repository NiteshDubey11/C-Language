//input integer,character and float and then print it

#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    
    printf("enter number a:");
    scanf("%d",&a);
    
    printf("\nenter character b:");
    scanf(" %c",&b);
    
    printf("\nenter float c:");
    scanf("%f",&c);
    
    printf("\nthe number is %d, the character is %c, and the float is %f",a,b,c);

    return 0;
}
