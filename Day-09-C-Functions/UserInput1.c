#include<stdio.h>

int main(){

    printf("Enter Array Size \n");
    int size;
    scanf("%d",&size);
 
    int data[size];

    for(int a = 0 ; a < size ;a++){
        printf("Enter Array item = %d\n",a);
        scanf("%d",&data[a]);
    }
    printf("\n-------output---------\n");
    for(int a = 0 ; a < size ;a++){
        printf("Item = %d\n",data[a]);
        
    }



    return 0;
}