// c input and output

#include <stdio.h>

// input and output example

int main()
{
    // integer datatype
    int integerNumber;
    printf("Enter an integer number: ");
    scanf("%d", &integerNumber);
    printf("Integer Number: %d\n", integerNumber);
    
    // float datatype
    float floatNumber;
    printf("Enter a float number: ");
    scanf("%f", &floatNumber);
    printf("Float Number: %f\n", floatNumber);
    
    // double datatype
    double doubleNumber;
    printf("Enter a double number: ");
    scanf("%lf", &doubleNumber);
    printf("Double Number: %lf\n", doubleNumber);
    
    // character datatype
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    printf("Character: %c\n", character);
    
    return 0;
}