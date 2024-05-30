#include<stdio.h>
// Find the Largest Among Three Numbers
int main(){

    int number1 = 90;
    int number2 = 10;
    int number3 = 80;

    if(number1 > number2 && number1 > number3){
        printf("The largest number is %d\n", number1);
    }else if (number2 > number1 && number2 > number3){
        printf("The largest number is %d\n", number2);
    }else{
        printf("The largest number is %d\n", number3);
    }
    



    return 0;
}