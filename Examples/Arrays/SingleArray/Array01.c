#include<stdio.h>

int main(){


    printf("\n*******************************************\n");
    printf("\n**                                     **\n");

    printf("Enter array size \n");
    int size;
    scanf("%d",&size);


    // single array 

    int data[size];

    // user input 

    for(int a = 0 ; a < size ; a++){
        printf("Enter element %d \n",a+1);
        scanf("%d",&data[a]);
    }
    









   


    return 0;
}