
# Keywords & Identifier
----------------
## keywords used in the C programming language:

1. auto: Specifies automatic storage class for local variables.
2. break: Terminates the execution of a loop or switch statement.
3. case: Defines a branch in a switch statement.
4. char: Declares a character variable or data type.
5. const: Specifies that a variable's value cannot be changed.
6. continue: Skips the current iteration of a loop and moves to the next iteration.
7. default: Defines a default branch in a switch statement.
8. do: Starts a do-while loop.
9. double: Declares a double-precision floating-point variable or data type.
10. else: Defines an alternative branch in an if-else statement.
11. enum: Declares an enumeration type.
12. extern: Declares a variable or function as being defined externally.
13. float: Declares a floating-point variable or data type.
14. for: Starts a for loop.
15. goto: Transfers control to a labeled statement.
16. if: Starts an if statement.
17. int: Declares an integer variable or data type.
18. long: Declares a long integer variable or data type.
19. register: Declares a variable to be stored in a CPU register.
20. return: Exits a function and returns a value.
21. short: Declares a short integer variable or data type.
22. signed: Declares a signed integer variable or data type.
23. sizeof: Returns the size of a data type or variable.
24. static: Specifies that a variable retains its value between function calls.
25. struct: Defines a structure type.
26. switch: Starts a switch statement.
27. typedef: Creates a new type alias.
28. union: Defines a union type.
29. unsigned: Declares an unsigned integer variable or data type.
30. void: Specifies an empty or no type.
31. volatile: Specifies that a variable can be modified externally.
32. while: Starts a while loop.
-------------
# Identifier

In C programming, an identifier is a name given to a variable, function, structure, or any other user-defined entity. Identifiers are used to uniquely identify these entities within a program. Here are some rules and guidelines for naming identifiers in C:

1. An identifier must start with a letter (A-Z or a-z) or an underscore (_) character.
2. After the first character, an identifier can contain letters, digits (0-9), and underscores.
3. The length of an identifier is not limited, but only the first 31 characters are significant (in standard C).
4. C is case-sensitive, so uppercase and lowercase letters are considered distinct. For example, "myVariable" and "myvariable" are different identifiers.
5. You cannot use reserved keywords (such as "if," "for," "while") as identifiers.
6. Avoid using identifiers that are too similar to existing identifiers or preprocessor macros to prevent confusion and potential errors.
7. It is good practice to choose meaningful and descriptive names for identifiers to enhance code readability and maintainability.
8. The use of camel case or underscore-separated words is common for naming identifiers. For example, "myVariable," "totalCount," or "is_valid_input."

Here are some examples of valid identifiers in C:

```c
int age;
float pi;
char myChar;
int numberOfStudents;
void calculateSum();
struct studentRecord;
```

Remember to follow these rules and guidelines when choosing identifiers to write clean and understandable code.

An example that demonstrates the use of identifiers in C programming:

```c
#include <stdio.h>

int main() {
    int age = 25;
    float salary = 5000.50;
    char initial = 'J';
    char firstName[20] = "John";
    
    printf("Personal Information:\n");
    printf("Name: %s\n", firstName);
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Salary: %.2f\n", salary);
    
    return 0;
}
```

In this example, we have used several identifiers:

- `age`: An integer variable that stores the age.
- `salary`: A float variable that stores the salary.
- `initial`: A character variable that stores the initial.
- `firstName`: A character array (string) that stores the first name.

These identifiers are used to store and retrieve values in the program. We then use the `printf` function to display the personal information, using the identifiers to access and print the corresponding values.

When the program runs, it will output:

```
Personal Information:
Name: John
Age: 25
Initial: J
Salary: 5000.50
```

This example showcases the usage of identifiers to represent different types of data in C programming.



## Assignment 1
Print "Hello, World!" to the terminal

## Example Output
```terminal_session
p4n:~/LearningC/ # ./assignment1                                        
Hello, World!#
```
