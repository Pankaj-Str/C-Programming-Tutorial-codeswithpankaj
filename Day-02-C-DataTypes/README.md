# Variables & Constants

Variables are used to store and manipulate data. They provide a way to give a name to a memory location so that it can be easily accessed and manipulated throughout the program. Here are some key points about variables in C:

1. Declaration: Before using a variable, it needs to be declared with its data type. The general syntax for declaring a variable is: `data_type variable_name;`. For example:

   ```c
   int age;
   float salary;
   char initial;
   ```
2. Initialization: Variables can be initialized at the time of declaration by assigning an initial value to them. For example:
   ```c
   int age = 25;
   float salary = 5000.50;
   char initial = 'J';
   ```

3. Data Types: C provides various data types for variables, such as `int` (integer), `float` (floating-point), `char` (character), `double` (double-precision floating-point), and more. Each data type has a specific range of values and memory size.

4. Variable Names: A variable name is an identifier that represents the variable. It should follow the rules of identifiers in C (as mentioned earlier). Variable names should be meaningful and descriptive.

5. Scope: Variables have a scope, which determines their visibility and accessibility within the program. The scope of a variable can be global (accessible throughout the program) or local (limited to a specific block or function).

6. Assignment: Variables can be assigned new values using the assignment operator (`=`). For example:
   ```c
   age = 30;
   salary = 6000.75;
   ```

7. Manipulation: Variables can be manipulated using arithmetic, logical, and other operators. For example:
   ```c
   int sum = num1 + num2;
   float average = total / count;
   ```

8. Printing Variables: Variables can be printed using the `printf` function to display their values. For example:
   ```c
   printf("Age: %d\n", age);
   printf("Salary: %.2f\n", salary);
   ```

9. Memory Allocation: Variables require memory allocation based on their data type. C automatically allocates memory for variables, which can be freed when they go out of scope.

It's important to remember that variables must be declared before they are used, and their data type must match the type of data they store to avoid errors and unexpected behavior in the program.


---------------


Constants are fixed values that cannot be modified during program execution. They are used to represent values that remain constant throughout the program. Constants provide a way to give meaningful names to fixed values and improve code readability. Here are some important points about constants in C:

1. Declaration: Constants are declared using the `const` keyword followed by the data type and the constant name. For example:
   ```c
   const int MAX_VALUE = 100;
   const float PI = 3.14;
   const char NEW_LINE = '\n';
   ```

2. Naming Convention: By convention, constant names are usually written in uppercase letters to distinguish them from variables.

3. Data Types: Constants can have different data types, such as `int`, `float`, `char`, etc., depending on the value they represent.

4. Initialization: Constants must be initialized at the time of declaration. Once initialized, their value cannot be changed throughout the program.

5. Scope: Constants have a scope similar to variables. They can be declared as global constants (accessible throughout the program) or local constants (limited to a specific block or function).

6. Benefits: Constants help in code maintenance and readability by providing meaningful names to fixed values. They also prevent accidental modification of values, which can lead to program bugs.

7. Using Constants: Constants can be used in the program like variables. They can be used in calculations, comparisons, assignments, and function calls.

8. Preprocessor Constants: In addition to `const`-qualified constants, C also supports preprocessor constants defined using the `#define` directive. These constants are replaced by their values during the preprocessing stage. For example:
   ```c
   #define MAX_VALUE 100
   #define PI 3.14
   #define NEW_LINE '\n'
   ```

9. Mathematical Constants: C provides some predefined constants in the `math.h` library, such as `M_PI` (pi value) and `M_E` (Euler's number).

Here's an example illustrating the usage of constants in C:

```c
#include <stdio.h>

#define MAX_VALUE 100
const float PI = 3.14;

int main() {
    int radius = 5;
    float circumference = 2 * PI * radius;

    if (circumference > MAX_VALUE) {
        printf("The circumference is greater than the maximum value.\n");
    }

    return 0;
}
```

In this example, we define a preprocessor constant `MAX_VALUE` using `#define` and a `const`-qualified constant `PI`. We then calculate the circumference of a circle using the constant `PI` and compare it with the `MAX_VALUE` constant. The constant values are used to make the code more readable and maintainable.

Note: Constants, whether defined using `const` or preprocessor directives, should be used when the value is truly fixed and not intended to be modified.

--------------

## Assignment 1
Initialize and assign a value to an integer, float, and char variable. Then print each one with a sentence on a new line describing variable data type.

### Expected Output :
```terminal_session
5 is an integer!
3.140000 is a float!
Hello, World! is a char!
```
## Assignment 2
Write a C program to print your name, date of birth, and mobile number.

### Expected Output :
```terminal_session
Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999
```
## Assignment 3
Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

### Expected Output :
```terminal_session
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
```
## Assignment 4 
Write a C program to compute the perimeter and area of a circle with a given radius.

### Expected Output :
```terminal_session
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
```

