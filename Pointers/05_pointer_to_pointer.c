/*
    Pointer to pointer variable: stores the address of a pointer.
        syntax for declaration:
            int **pptr;
            char **pptr;
            float **pptr;
        
*/
#include <stdio.h>

int main() {
    float price=100.00;
    float *ptr=&price;
    float **pptr=&ptr;
    
    printf("%.2f\n",price);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    printf("%u\n",pptr);
    printf("%u\n",&pptr);
    printf("%.2f\n",*ptr);
    printf("%.2f\n",**pptr);
    
    

    return 0;
}
