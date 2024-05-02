# C - Variables

In C programming, variables are used to store and manipulate data. A variable is essentially a named storage location in memory where you can store values of different data types. Here's how you declare and use variables in C:

1. **Variable Declaration**: To declare a variable, you specify its data type followed by the variable's name.

```c
int age; // Declares an integer variable named "age"
float salary; // Declares a floating-point variable named "salary"
char grade; // Declares a character variable named "grade"
```

2. **Variable Initialization**: You can also initialize a variable when declaring it by assigning an initial value.

```c
int score = 95; // Declares and initializes an integer variable
float pi = 3.14159265359; // Declares and initializes a float variable
char letter = 'A'; // Declares and initializes a character variable
```

3. **Variable Assignment**: You can assign values to variables using the assignment operator (`=`).

```c
age = 25; // Assigns the value 25 to the "age" variable
salary = 50000.50; // Assigns the value 50000.50 to the "salary" variable
grade = 'B'; // Assigns the character 'B' to the "grade" variable
```

4. **Variable Naming Rules**:
   - Variable names must start with a letter (uppercase or lowercase) or an underscore `_`.
   - After the first character, variable names can contain letters, digits, and underscores.
   - C is case-sensitive, so `age` and `Age` are treated as different variables.

5. **Data Types**: Variables have associated data types that determine what kind of data they can store. Common data types include `int`, `float`, `char`, `double`, and custom data types created using `struct` or `enum`.

6. **Scope**: The scope of a variable defines where in the program it can be used. For example, a variable declared within a function is usually local to that function, while a variable declared outside of any function (at the global scope) can be used throughout the program.

```c
int globalVar; // Global variable, accessible in all functions

void someFunction() {
    int localVar; // Local variable, only accessible within this function
}
```

7. **Constants**: In C, you can define constants using the `const` keyword. Constants are variables whose values cannot be changed once they are set.

```c
const int MAX_VALUE = 100; // Declaring a constant
```

8. **Variable Size**: The size of a variable depends on its data type. You can use the `sizeof` operator to determine the size of a variable or data type in bytes.

```c
int intSize = sizeof(int); // Gets the size of an int in bytes
```

Variables are fundamental in C programming, and they allow you to store and manipulate data within your programs. Understanding data types, variable declaration, and assignment is crucial for writing C programs effectively.

## Question

```yaml


-- input Section 
1. Enter Student Name : Ravi
2. Enter Roll Number : RAVI009912
3. Enter Class : MCA
4. Enter JAVA Marks : 56
5. Enter C++ Marks : 89
6. Enter Python Marks : 12
7. Enter Ruby Marks : 56
8. Enter SQL Marks : 78

-- Output Section
Student Name : Ravi
Roll Number : RAVI009912
Class : MCA
Enter JAVA Marks : 56/100
C++ Marks : 89/100
Python Marks : 12/100
Ruby Marks : 56/100
SQL Marks : 78/100
   total = ?
   Per % = ?%

```

