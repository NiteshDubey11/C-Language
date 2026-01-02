/*
    Question 5:
    Print the sum of first n Natural Numbers,
    also,print them in reverse
*/
#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(int i=1,j=n;i<=n,j>=1;i++,j--){
        sum+=i;
        printf("%d\n",j);
    }
    printf("Sum is:%d",sum);
    return 0;
}
