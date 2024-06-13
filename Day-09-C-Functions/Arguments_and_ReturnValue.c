#include <stdio.h>

int square(int n) {
    return n * n;
}

float total(int number1, int number2){
    return number1 + number2;
}

int main() {
    int num = 4;
    printf("Square of %d is %d\n", num, square(num));
    printf("Total of 5 and 7 is %f\n", total(5,7));
    return 0;
}