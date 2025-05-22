#include<stdio.h>


int main(){

    // enter row and column size

    printf("enter row size \n");
    int row;
    scanf("%d", &row);
    printf("enter column size \n");
    int column;
    scanf("%d", &column);

    // declare a 2D array of size row x column
    int data[row][column];
    // initialize the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter data[%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);
        }
    }


    // print all elements of the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}