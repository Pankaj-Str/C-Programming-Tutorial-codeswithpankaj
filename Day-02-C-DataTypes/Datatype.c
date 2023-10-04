#include <stdio.h>

int main() {
    // Integer data type
    int integerVar = 42;
    
    // Floating-point data types
    float floatVar = 3.14159;
    double doubleVar = 2.71828;
    
    // Character data type
    char charVar = 'A';
    
    // Boolean data type (using _Bool)
    _Bool boolVar = 1;  // 1 represents true
    
    // Display the values
    printf("Integer: %d\n", integerVar);
    printf("Float: %.5f\n", floatVar);
    printf("Double: %.5lf\n", doubleVar);
    printf("Character: %c\n", charVar);
    printf("Boolean: %d\n", boolVar); // 1 represents true

    return 0;
}
