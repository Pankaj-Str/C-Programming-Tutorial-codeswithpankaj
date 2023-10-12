
# Error Handling in C

Error handling is a crucial aspect of programming in C. It involves identifying, reporting, and handling errors or exceptional conditions that may occur during the execution of a program. In C, error handling is often done using error codes, return values, and the `errno` variable. Let's explore various techniques for error handling in C.

## Error Codes and Return Values

One common approach to error handling in C is using error codes and return values. Functions return specific values to indicate success or failure. A common convention is to return `0` for success and a non-zero value for failure.

### Return Values

For functions that return values, you can use specific return values to indicate errors. For example, a function that reads a file might return `-1` on error and the number of bytes read on success.

```c
int readDataFromFile(const char *filename, char *buffer, int maxBytes) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return -1; // Error opening the file
    }

    int bytesRead = fread(buffer, 1, maxBytes, file);
    fclose(file);

    if (bytesRead < 0) {
        return -2; // Error reading from the file
    }

    return bytesRead; // Success
}
```

### `errno` Variable

The `errno` variable is a global integer variable that is set by C library functions to indicate an error. You can include the `<errno.h>` header to access standard error codes.

```c
#include <stdio.h>
#include <errno.h>

int main() {
    FILE *file = fopen("nonexistent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        fprintf(stderr, "Error code: %d\n", errno);
    }
    
    return 0;
}
```

In this example, the `perror` function is used to print an error message related to the error code in `errno`. The `fprintf` function is used to print the error code itself.

## `assert` Macro

The `assert` macro is used for debugging and is available when you include the `<assert.h>` header. It allows you to check an expression, and if it evaluates to false (zero), it triggers an assertion failure.

```c
#include <assert.h>

int divide(int x, int y) {
    assert(y != 0);
    return x / y;
}
```

In this example, the `assert` macro checks whether the denominator `y` is not zero. If `y` is zero, the program will terminate with an assertion failure message.

## Error Handling Libraries

In addition to basic error handling techniques, you can use error handling libraries like `setjmp` and `longjmp` to implement more advanced error handling mechanisms, such as exception handling. These libraries are not as commonly used and are more complex.

## Exception Handling in C


```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
    FILE *file = fopen("nonexistent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        fprintf(stderr, "Error code: %d\n", errno);
        return 1; // Return an error code to indicate failure
    }

    // Perform operations on the file
    // ...

    fclose(file);
    return 0; // Return 0 to indicate success
}
```

In this example:

1. We attempt to open a file that does not exist using `fopen`.
2. If the `fopen` function fails, it returns `NULL`, and `errno` is set to indicate the error.
3. We use `perror` to print an error message related to the error code in `errno`.
4. We use `fprintf` to print the error code itself.
5. Finally, we return a non-zero error code to indicate that an error occurred.


## Conclusion

Error handling is an essential part of C programming. By understanding and using error codes, return values, the `errno` variable, and advanced error handling techniques, you can effectively identify, report, and handle errors in your C programs. Exception handling in C++ provides even more advanced error handling capabilities for C++ programs. It is crucial to choose the appropriate error handling strategy based on the specific needs and complexity of your project.
