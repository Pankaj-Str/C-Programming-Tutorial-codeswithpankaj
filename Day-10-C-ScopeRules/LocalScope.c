#include <stdio.h>

void display() {
    int num = 5; // Local variable
    printf("Number: %d\n", num);
}

int main() {
    display();
    // printf("Number: %d\n", num); // Error: num is not accessible here
    return 0;
}