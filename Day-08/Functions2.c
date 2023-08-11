#include<stdio.h>

//function with arguments and without return value

void info(int age , float height){
    printf("Your Age is : %d\n",age);
    printf("Your Height is : %f\n",height);
}

int main(){

    //calling Function...
    info(12,4.5);
    info(56,6.5);

    return 0;
}