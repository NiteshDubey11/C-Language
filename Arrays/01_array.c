/*
    Array : A collection of values of similar data type stored at contiguous memory locations.
    
    Format for declaring Array :
        int marks[3];
        char name[10];
        float price[2];
*/

#include <stdio.h>

int main() {
    int marks[3];
    printf("enter physics marks : ");
    scanf("%d",&marks[0]);
    
    printf("enter chemistry marks : ");
    scanf("%d",&marks[1]);
    
    printf("enter maths marks : ");
    scanf("%d",&marks[2]);
    
    printf("Physics : %d, Chemistry : %d, Maths : %d",marks[0],marks[1],marks[2]);
    return 0;
}
