#include <stdio.h>
//www.p4n.in
//www.codeswithpankaj.com
int main() {
    // Integer types
    int age = 25;
    short weight = 150;
    long population = 7800000000;
    unsigned int count = 100;
    unsigned short distance = 500;
    unsigned long total = 1000000000L;
    char grade = 'A';

    // Floating-point types
    float pi = 3.14159f;
    double salary = 5000.50;
    long double distanceCovered = 1234567890.123456789;

    // Derived types
    int numbers[5] = {1, 2, 3, 4, 5};
    int* ptr = &age;
    struct Person {
        char name[20];
        int age;
    };
    enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

    // Printing values
    printf("Integer types:\n");
    printf("Age: %d\n", age);
    printf("Weight: %hd\n", weight);
    printf("Population: %ld\n", population);
    printf("Count: %u\n", count);
    printf("Distance: %hu\n", distance);
    printf("Total: %lu\n", total);
    printf("Grade: %c\n", grade);

    printf("\nFloating-point types:\n");
    printf("Pi: %.5f\n", pi);
    printf("Salary: %.2f\n", salary);
    printf("Distance Covered: %.9Lf\n", distanceCovered);

    printf("\nDerived types:\n");
    printf("Numbers: %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    printf("Pointer: %p\n", ptr);
    printf("Person Name: John\n");
    printf("Person Age: %d\n", age);
    printf("Day: %d\n", WED);

    return 0;
}
