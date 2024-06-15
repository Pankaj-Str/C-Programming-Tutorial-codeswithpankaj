#include <stdio.h>

int main() {
    int x = 10;

    if (x > 5) {
        int y = 20; // Block scope
        printf("y: %d\n", y);
    }

    // printf("y: %d\n", y); // Error: y is not accessible here
    return 0;
}