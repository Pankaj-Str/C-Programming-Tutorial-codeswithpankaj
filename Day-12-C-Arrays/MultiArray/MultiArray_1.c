#include<stdio.h>

int main(){

    int data[3][3];

    data[0][0] = 23;
    data[1][0] = 21;
    data[2][0] = 22;

    data[0][1] = 24;
    data[1][1] = 25;
    data[2][1] = 26;

    data[0][2] = 73;
    data[1][2] = 78;
    data[2][2] = 89;


    //printf("%d\n",data[1][2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}