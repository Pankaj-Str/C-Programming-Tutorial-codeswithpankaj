# Loop

In C, loops are used to execute a block of code repeatedly as long as a certain condition is met or for a specified number of iterations. There are three main types of loops in C: `for` loops, `while` loops, and `do-while` loops. Here are examples of each type:

1. `for` Loop:

   The `for` loop is used when you know how many times you want to repeat a block of code.

```c
#include <stdio.h>

int main() {
    // Print numbers from 1 to 5 using a for loop
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
```

2. `while` Loop:

   The `while` loop is used when you want to repeat a block of code as long as a condition is true.

```c
#include <stdio.h>

int main() {
    int count = 1;

    // Print numbers from 1 to 5 using a while loop
    while (count <= 5) {
        printf("%d ", count);
        count++;
    }

    return 0;
}
```

3. `do-while` Loop:

   The `do-while` loop is used when you want to execute a block of code at least once, and then repeat it as long as a condition is true.

```c
#include <stdio.h>

int main() {
    int count = 1;

    // Print numbers from 1 to 5 using a do-while loop
    do {
        printf("%d ", count);
        count++;
    } while (count <= 5);

    return 0;
}
```

In each of these examples, we are printing numbers from 1 to 5. The choice of loop depends on your specific requirements. `for` loops are typically used when you know the number of iterations in advance, `while` loops are used when the number of iterations is not known in advance but depends on a condition, and `do-while` loops are used when you want to ensure that the loop body is executed at least once, regardless of the condition.

Loops are essential for performing repetitive tasks in programming and are a fundamental part of control flow in C.