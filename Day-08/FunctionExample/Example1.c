#include<stdio.h>

// create function 
void info(){
    printf("codeswithpankaj.com\n");
    printf("c programming tutorial -- \n");
}

void getinfo(int age, float height){
    printf("Your Age is : %d\n",age);
    printf("Your Height is : %2f\n",height);
    printf("-----------------\n");
}


int main(){
    // calling function
    info();
    getinfo(23,6.5);
    getinfo(12,4.5);

    

    return 0;
}