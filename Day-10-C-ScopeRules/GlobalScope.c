#include <stdio.h>

int num = 10; // Global variable

void display() {
    printf("Number: %d\n", num);
}

int main() {
    printf("Number in main: %d\n", num);
    display();
    return 0;
}