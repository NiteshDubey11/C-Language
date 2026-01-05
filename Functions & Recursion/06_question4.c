/*
    Question 4:
    Write a function that prints the final price with gst of about 18% whose initial price is taken as input from the user
*/
#include <stdio.h>

void price(float n);

int main() {
    float n;
    printf("Enter price:");
    scanf("%f",&n);
    
    price(n);
    
    return 0;
}

void price(float n){
    n=n+(n*0.18);
    printf("the updated price with gst is:%.2f",n);
}
