/*
    Pointer arithmetic : Pointer can be incremented & decremented.
*/
#include <stdio.h>

int main() {
    //Case 1 : int(4)
    int age=22;
    int *ptr=&age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);
    
    printf("\n");
    
    //Case 2 : float(4)
    float price=20.00;
    float *ptr1=&price;
    printf("ptr = %u\n",ptr1);
    ptr1++;
    printf("ptr = %u\n",ptr1);
    ptr1--;
    printf("ptr = %u\n",ptr1);
    
    printf("\n");
    
    //Case 3 : char(1)
    char star='*';
    char *ptr2=&star;
    printf("ptr = %u\n",ptr2);
    ptr2++;
    printf("ptr = %u\n",ptr2);
    ptr2--;
    printf("ptr = %u\n",ptr2);
    
    return 0;
}
