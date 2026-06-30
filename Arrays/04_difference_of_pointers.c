#include<stdio.h>
int main(){
    int age1 = 19;
    int age2 = 21;
    
    int *ptr1 = &age1;
    int *ptr2 = &age2;
    
    printf("pointer of age1: %u and pointer of age2: %u",ptr1,ptr2);
    
    printf("\n");
    printf("\n");
    printf("Difference between both pointers(ptr1-ptr2) : %u",ptr1-ptr2);
    
    printf("\n");
    printf("Difference between both pointers(ptr2-ptr1) : %u",ptr2-ptr1);
    
    printf("\n");
    printf("\n");
    printf("Comparison between both pointers before : %u('1' for 'True' and '0' for 'False')",ptr2==ptr1);
    
    printf("\n");
    ptr2= &age1;
    printf("Comparison between both pointers after : %u('1' for 'True' and '0' for 'False')",ptr2==ptr1);
    
}
