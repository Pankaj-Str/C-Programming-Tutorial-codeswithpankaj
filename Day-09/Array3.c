#include<stdio.h>

int main(){

        // get array size from user
        int size;
        printf("--------- enter array size -------- \n");
        scanf("%d",&size);
        // create array 
        int data[size]; //array size

        // import elements into array from user input
        for(int i = 0; i < size; i++){
            printf("--- Enter Elements into Array no. -- %d\n",i);
            scanf("%d",&data[i]);
        }

        // access all item from array 

        for(int i = 0; i < size; i++){
            printf("Item = %d\n",data[i]);
        }


    return 0;
}