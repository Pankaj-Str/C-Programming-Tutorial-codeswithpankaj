#include<stdio.h>

int main(){

    int number1;
    int number2;
    int number3;

    number1 = 100;
    number2 = 20;
    number3 = 3;

    if(number1 < number2 && number1 < number3){
     printf("Number 1 is smallest ....");
    }else{
          if(number2 < number1 && number2 < number3){
               printf("Number 2 is smallest ....");
          }else{
                printf("Number 3 is smallest ....");
          }
    }

    return 0;
}