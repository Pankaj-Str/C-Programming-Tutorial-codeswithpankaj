#include<stdio.h>

int main(){ 

    // 2d array 
    printf("Enter Row Number ... \n");
    int row;
    scanf("%d",&row);
    printf("Enter Col Number ... \n");
    int col;
    scanf("%d",&col);

    int data[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            printf("Enter item into array  %d | %d\n",i,a);
            scanf("%d",&data[i][a]);
        }
        
    }

    printf("\n---------------out put-------------------\n");

    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            printf("%d ",data[i][a]);
            
        }
        printf("\n");
        
    }
    




    return 0;
}