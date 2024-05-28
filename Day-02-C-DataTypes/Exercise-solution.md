

### Exercise 1: Write a program to find the size of various data types.
```c
#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("Size of unsigned long: %zu bytes\n", sizeof(unsigned long));
    
    return 0;
}
```

### Exercise 2: Create an array of integers and find the sum of its elements.
```c
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
```

### Exercise 3: Implement a function to swap two integers using pointers.
```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
```

### Exercise 4: Define a structure to represent a student with fields for name, roll number, and marks.
```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student1;

    // Assigning values to the student1 fields
    strcpy(student1.name, "John Doe");
    student1.rollNumber = 1;
    student1.marks = 85.5;

    // Printing the student1 details
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
```

### Exercise 5: Create a union to store an integer, a float, and a character array.
```c
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str: %s\n", data.str);

    return 0;
}
```

Note: When using unions, remember that they share the same memory location for all their members. Thus, storing a value in one member will overwrite any previously stored value. This is why only the last assigned value is valid in a union at any given time.