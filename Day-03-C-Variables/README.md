# C Data Types

Data types specify the type and size of data that can be stored in variables. C provides several built-in data types to accommodate different kinds of data. Here are some commonly used data types in C:

1. **Integer Types:**
   - `int`: Represents signed integers, typically 4 bytes.
   - `short`: Represents short signed integers, typically 2 bytes.
   - `long`: Represents long signed integers, typically 4 or 8 bytes.
   - `unsigned int`: Represents unsigned integers, typically 4 bytes.
   - `unsigned short`: Represents unsigned short integers, typically 2 bytes.
   - `unsigned long`: Represents unsigned long integers, typically 4 or 8 bytes.
   - `char`: Represents characters or small integers, typically 1 byte.

2. **Floating-Point Types:**
   - `float`: Represents single-precision floating-point numbers, typically 4 bytes.
   - `double`: Represents double-precision floating-point numbers, typically 8 bytes.

3. **Void Type:**
   - `void`: Represents the absence of any type. It is often used as a return type for functions that do not return a value or to indicate an empty parameter list.

4. **Derived Types:**
   - `arrays`: Represents a collection of elements of the same type.
   - `pointers`: Stores the memory address of another variable.
   - `structures`: Groups related data elements under a single name.
   - `unions`: Allows different data types to be stored in the same memory location.
   - `enumerations`: Defines a set of named integer constants.

These are the fundamental data types in C, and additional data types can be defined using these basic types and derived types. Each data type has its own range of values and occupies a specific amount of memory.

Here's an example that demonstrates the usage of some of these data types:

```c
#include <stdio.h>

int main() {
    int age = 25;
    float salary = 5000.50;
    char grade = 'A';
    double pi = 3.14159;
    
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Grade: %c\n", grade);
    printf("Pi: %.5f\n", pi);
    
    return 0;
}
```

In this example, we have variables of different data types: `age` (int), `salary` (float), `grade` (char), and `pi` (double). We use the `printf` function to display the values of these variables.

When the program runs, it will output:

```
Age: 25
Salary: 5000.50
Grade: A
Pi: 3.14159
```

This example showcases the usage of different data types in C programming to store and display different kinds of data.



## Assignment 1
Prompt the user to input their first and last name and then print them a welcome message. Try storing the input as a char variable's value.

Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.

Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.

## Example Output
```terminal_session
Enter your first name: pankaj
Enter your last name: chouhan
Hello pankaj chouhan
```


## Assignment 2

Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.
## Example Output
```terminal_session
Sample Date:
(1,2,3) -> 1
(10, 20, 4, 5, 11) -> 4
```
