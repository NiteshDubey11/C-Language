/* 
    check if number is odd or even.
    for even -> 1
    for odd -> 0

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
