//program to print smallest number of two

#include <stdio.h>

int main() {
    int a,b;
    
    printf("enter a:");
    scanf("%d",&a);
    
    printf("enter b:");
    scanf("%d",&b);
    
    if(a>b){
        printf("smaller number is:%d",b);
            }
    else{
        printf("smaller number is:%d",a);
    }
}
