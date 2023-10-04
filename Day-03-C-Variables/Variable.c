#include <stdio.h>

int main() {
    // Integer variables
    int age = 25;
    int height = 180;

    // Floating-point variables
    float weight = 75.5;
    double salary = 50000.75;

    // Character variables
    char grade = 'A';

    // String (character array) variable
    char name[] = "John";

    // Boolean variable (using _Bool)
    _Bool isStudent = 1; // 1 represents true

    // Display the values of variables
    printf("Age: %d\n", age);
    printf("Height: %d cm\n", height);
    printf("Weight: %.1f kg\n", weight);
    printf("Salary: %.2lf USD\n", salary);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
    printf("Is a student: %d\n", isStudent);

    return 0;
}
