#include<stdio.h>

int main(){

    int size;

    printf("\n Enter Array size \n ");
    scanf("%d",&size);
    
    int data[size];


    for(int i = 0; i < size ; i ++){

        printf("Enter Array item = %d\n ",i);
        scanf("%d",&data[i]);

    }
    printf("\n---------Output------------\n");   
    
    for(int i = 0; i < 5 ; i++){
        
        printf("%d\n",data[i]);

    }


    return 0;

}