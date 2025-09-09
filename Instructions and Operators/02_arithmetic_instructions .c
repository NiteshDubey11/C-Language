//all the arithmetic instructions(+,-,*,/,%,^)

#include <stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    
    // (+)is used for addition operation
    printf("sum:%d\n",a+b);
    
    // (-) is used for substraction operation
    printf("sub:%d\n",a-b);
    
    // (*) is used for multiplication operation
    printf("mul:%d\n",a*b);
    
    // (/) is used for division operation
    printf("div:%d\n",a/b);
    
    // (%) is used for remainder in division operation
    printf("rem:%d\n",a%b);
    
    //NOTE: ^ doesn't denotes exponential operation in C
    // pow(x,y) is used in C for exponential operation where Y becomes power of X
    printf("exp:%f",pow(a,b));
   
    return 0;
}
