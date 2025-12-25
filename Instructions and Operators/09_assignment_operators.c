/* 
    Assignment operators:
    a+=10 => a=a+10
    a-=10 => a=a-10
    a*=10 => a=a*10
    a/=10 => a=a/10
    a%=10 => a=a%10

*/
#include <stdio.h>

int main() {
    int a=10;
    
    a+=10; //10+10=20
    printf("a+10 = %d\n",a);
    
    a-=10; //20-10=10
    printf("a-10 = %d\n",a);
    
    a*=10; //10*10=100
    printf("a*10 = %d\n",a);
    
    a/=10; //100/10=10
    printf("a/10 = %d\n",a);
    
    a%=10; //10%10=0
    printf("a%10 = %d\n",a);
    

    return 0;
}
