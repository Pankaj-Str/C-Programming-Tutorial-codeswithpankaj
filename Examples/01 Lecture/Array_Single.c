#include<stdio.h>

int main(){


    int data[4];

    data[0] = 11;
    data[1] = 22;
    data[2] = 33;
    data[3] = 44;


    printf("data[0] = %d\n", data[0]);

    // print all elements of the array

    for (int i = 0; i < 4; i++)
    {
        printf("data[%d] = %d\n", i, data[i]);
    }

    return 0;
}