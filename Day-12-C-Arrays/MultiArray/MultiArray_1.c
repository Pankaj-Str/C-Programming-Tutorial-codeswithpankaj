#include<stdio.h>

int main(){

    // create a multi array
    int data[3][3];

    // assign values to the array
    data[0][0] = 1;
    data[0][1] = 2;
    data[0][2] = 3;
    data[1][0] = 4;
    data[1][1] = 5;
    data[1][2] = 6;
    data[2][0] = 7;
    data[2][1] = 8;
    data[2][2] = 9;
    
    // print the array using nested for loop

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }


    return 0;
}
