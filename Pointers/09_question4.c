/*
    Question 4 :
    Swap 2 numbers a and b by call by reference function.
*/
#include <stdio.h>

int _swap(int *a,int *b);

int main(){
    int x=3,y=5;
    _swap(&x,&y);
    printf("x=%d and y=%d",x,y);

    return 0;
}

int _swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a=%d and b=%d\n",*a,*b);
}
