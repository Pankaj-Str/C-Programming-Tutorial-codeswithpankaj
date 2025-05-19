#include<stdio.h>

int main(){

    // find the smallest number

    int number1, number2;
    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);

    if (number1 < number2){
        printf("%d is the smallest number\n", number1);
    }
    else{
        printf("%d is the smallest number\n", number2);
    }


    return 0;
}