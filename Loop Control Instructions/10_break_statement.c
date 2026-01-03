/*
    Format for Break Statement:
    break;

    Note:exit the loop
*/
#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
    }
    
    return 0;
}
