#include<stdio.h>

int main(){


        // create array 

        int data[4]; //array size 4

        // import elements into array
        data[0] = 12;
        data[1] = 13;
        data[2] = 14;
        data[3] = 15;

        // access all item from array 

        for(int i = 0; i < 4; i++){
            printf("%d\n",data[i]);
        }


    return 0;
}