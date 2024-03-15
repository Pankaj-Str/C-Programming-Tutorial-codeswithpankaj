#include<stdio.h>

int main(){

    int row,col;
    printf("Enter row \n ");
    scanf("%d",&row);
    printf("Enter Column \n ");
    scanf("%d",&col);

    int data[col][row];

    for (int i = 0; i < col; i++)
    {

        for (int a = 0; a < row; a++)
        {
            printf("Enter elements into array = %d %d\n",a,i);
            scanf("%d",&data[i][a]);
        }
        

        printf("\n");
    }

     printf("\n ---------------------------- \n");

    for (int i = 0; i < col; i++)
    {

        for (int a = 0; a < row; a++)
        {
            printf(" %d",data[i][a]);
        }
        

        printf("\n");
    }
    


    return 0;
}
