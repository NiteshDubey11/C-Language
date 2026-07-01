/*
    Array can be multidimensional(1D,2D,3D...)
    It is also visualized as matrix
    
    #Initialization of array(2D array):
        int arr[2][3]; //here 2 represents row and 3 represents column when array is visualized as matrix

*/

#include<stdio.h>

int main(){
    int marks[2][2];
    marks[0][0]=10;
    marks[0][1]=20;
    marks[1][0]=30;
    marks[1][1]=40;
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",marks[i][j]);
                            }
            printf("\n");
                        }
}
