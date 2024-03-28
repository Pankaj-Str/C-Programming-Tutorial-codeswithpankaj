#include<stdio.h>

int main(){

    // user input row and colmun
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    // create a multi array

    int data[row][col];

    // assign values to the array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the value for data[%d][%d]: ", i, j);
            scanf("%d", &data[i][j]);
        }
    }

    // print the array using nested for loop
    printf("\n ---------------------- \n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }   


    return 0;
}
