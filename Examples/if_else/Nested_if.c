#include<stdio.h>

int main(){


    // find smalllest number 

    int number1 , number2 , number3;


    number1 = 100;
    number2 = 200;
    number3 = 30;

    if (number1 < number2 && number1 < number3)
    {   
        
        printf("number 1 is smallest...\n");
    }else if (number2 < number1 && number2 < number3){
        printf("number 2 is smallest...\n");
    }else{
        printf("Number 3 is smallest....\n");
    }
    



    return 0;
}