#include<stdio.h>

int main() {

    // find the smallest number

    int number1, number2, number3;
    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);
    printf("Enter number3: ");
    scanf("%d", &number3);


    if (number1 < number2 && number1 < number3) {
        // true section
        printf("%d is the smallest number\n", number1);
    }
    else if (number2 < number1 && number2 < number3) {
        // false section
        printf("%d is the smallest number\n", number2);
    }
    else {
        // false section
        printf("%d is the smallest number\n", number3);
    }


    return 0;
}