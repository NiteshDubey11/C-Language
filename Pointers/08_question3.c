/*
    Question 3 :
    Swap 2 numbers a and b by call by value function.
*/
#include <stdio.h>

int swap(int a,int b);

int main(){
    int x=3,y=5;
    swap(x,y);
    printf("x=%d and y=%d",x,y);

    return 0;
}

int swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d and b=%d\n",a,b);
}
