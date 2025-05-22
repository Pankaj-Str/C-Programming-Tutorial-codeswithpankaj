#include<stdio.h>

int main(){

    printf("enter array size \n");
    int size;
    scanf("%d", &size);
    // declare an array of size 'size'
    int data[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter data[%d] = ", i);
        scanf("%d", &data[i]);
    }


    

    // print all elements of the array

    for (int i = 0; i < size; i++)
    {
        printf("data[%d] = %d\n", i, data[i]);
    }

    return 0;
}