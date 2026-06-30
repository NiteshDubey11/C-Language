//Array Traversal

#include<stdio.h>

int main(){
    int i;
    int table[5];
    int *ptr=&table[0];
    
    for(i=0;i<5;i++){
        printf("index %d:",i);
        scanf("%d",(ptr+i));
    }
    
    for(i=0;i<5;i++){
        printf("on index %d, value:%d\n",i,*(ptr+i));
    }
}
