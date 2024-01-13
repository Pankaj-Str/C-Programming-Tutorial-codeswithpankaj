#include<stdio.h>

int main(){

    int data[5];

    data[0] = 50; 
    data[1] = 40; 
    data[2] = 30; 
    data[3] = 20; 
    data[4] = 10; 


    // printf("%d\n",data[0]);
    // printf("%d\n",data[1]);
    // printf("%d\n",data[2]);
    // printf("%d\n",data[3]);
    // printf("%d\n",data[4]);


    for(int i = 0; i < 5 ; i++){
        
        printf("%d\n",data[i]);

    }
    


    return 0;
}