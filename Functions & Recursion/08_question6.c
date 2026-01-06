/*
    Question 6:
    Write functions to calculate area of a square,a circle and a rectangle
*/
#include <stdio.h>

float squarearea(float side);
float rectanglearea(float a,float b);
float circlearea(float radius);

int main() {
    float a=2,b=3,side=5,radius=7;
    
    printf("%.2f\n",squarearea(side));
    printf("%.2f\n",rectanglearea(a,b));
    printf("%.2f\n",circlearea(radius));

    return 0;
}

float squarearea(float side){
    return side*side;
}

float rectanglearea(float a,float b){
    return a*b;
}

float circlearea(float radius){
    return 3.14*radius*radius;
}
