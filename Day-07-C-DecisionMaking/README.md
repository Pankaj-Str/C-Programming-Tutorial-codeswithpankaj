# Decision making in C


Decision making in C involves making choices in your program based on certain conditions or criteria. C provides various constructs for decision making, including `if` statements, `else if` statements, `else` statements, and switch statements. Here are examples of these constructs:

1. `if` Statement:

   The `if` statement is used to execute a block of code if a specified condition is true.

```c
#include <stdio.h>

int main() {
    int age = 18;

    if (age >= 18) {
        printf("You are eligible to vote!\n");
    }

    return 0;
}
```

2. `if-else` Statement:

   The `if-else` statement is used to execute one block of code if a condition is true and another block if the condition is false.

```c
#include <stdio.h>

int main() {
    int num = 10;

    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
```

3. `else if` Statement:

   The `else if` statement is used to test multiple conditions in sequence and execute the block of code associated with the first true condition.

```c
#include <stdio.h>

int main() {
    int score = 85;

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
```

4. `switch` Statement:

   The `switch` statement allows you to select one of many code blocks to be executed, based on the value of an expression.

```c
#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Fair!\n");
            break;
        case 'D':
            printf("Needs improvement!\n");
            break;
        default:
            printf("Invalid grade!\n");
    }

    return 0;
}
```

These decision-making constructs allow you to control the flow of your program and make it more responsive to different conditions and inputs.