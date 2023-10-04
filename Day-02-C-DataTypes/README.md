# C - Data Types

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

C programming, data types are used to define the type of data that a variable can hold. Here are some common data types in C, along with examples of how to use them:

1. **int**: This data type is used to store integers (whole numbers).

```c
int age = 25;
```

2. **float**: This data type is used to store floating-point numbers (numbers with decimal points).

```c
float salary = 50000.50;
```

3. **double**: This data type is used to store double-precision floating-point numbers, which can hold more decimal places than float.

```c
double pi = 3.14159265359;
```

4. **char**: This data type is used to store a single character.

```c
char grade = 'A';
```

5. **bool** (Note: C doesn't have a built-in bool type, but you can use `stdbool.h` to work with Boolean values):

```c
#include <stdbool.h>
bool isStudent = true;
```

6. **enum**: Enums are used to define a set of named integer constants.

```c
enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

enum Weekday today = MONDAY;
```

7. **struct**: Structs allow you to define custom data types by grouping multiple variables of different data types together.

```c
struct Person {
    char name[50];
    int age;
    float height;
};

struct Person person1;
person1.age = 30;
```

8. **arrays**: Arrays allow you to store a collection of values of the same data type.

```c
int scores[5] = {90, 85, 88, 92, 78};
```

9. **pointers**: Pointers are used to store memory addresses of other variables.

```c
int x = 10;
int *ptr = &x; // ptr now holds the address of x
```

These are some common data types in C. You can use them to declare variables and manipulate data in your C programs.