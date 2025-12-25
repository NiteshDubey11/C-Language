/* 
    check if number is odd or even.
    for even -> 0
    for odd -> 1

*/
#include <stdio.h>

int main()
{
    int a;
    printf("enter number:");
    scanf("%d",&a);
    printf("Output:%d",a%2==0);

    return 0;
}
