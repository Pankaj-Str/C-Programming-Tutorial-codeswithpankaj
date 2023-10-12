
# C Input and Output (I/O)

C programming language provides a variety of functions and libraries for handling input and output operations. These operations allow you to interact with users, read data from external sources, and write data to different destinations. Understanding the principles of input and output is essential for creating practical and interactive C programs.

## Standard I/O Streams

C programs use three standard I/O streams for input and output:

1. **`stdin` (Standard Input)**: This stream is used for reading data from the keyboard or other input devices. It is associated with the `getchar()` and `scanf()` functions for reading input.

2. **`stdout` (Standard Output)**: This stream is used for writing data to the screen or console. It is associated with the `putchar()` and `printf()` functions for displaying output.

3. **`stderr` (Standard Error)**: This stream is used for writing error messages or diagnostic information to the screen. It is also associated with the `fprintf()` function.

## Input Functions

### `getchar()`

- `getchar()` is a standard C library function that reads a single character from the `stdin` stream.

```c
int ch = getchar(); // Read a character
```

### `scanf()`

- `scanf()` is used to read formatted input from the `stdin` stream. It allows you to specify data format, placeholders, and variable addresses.

```c
int age;
printf("Enter your age: ");
scanf("%d", &age);
```

## Output Functions

### `putchar()`

- `putchar()` is used to display a single character to the `stdout` stream.

```c
putchar('A'); // Display 'A' on the screen
```

### `printf()`

- `printf()` is used for formatted output to the `stdout` stream. It allows you to control the appearance of data in the output.

```c
int value = 42;
printf("The answer is: %d\n", value);
```

## File I/O Functions

C provides file I/O functions to read from and write to external files. These functions include:

### `fopen()`

- `fopen()` is used to open a file. It returns a file pointer.

```c
FILE *file = fopen("example.txt", "r");
```

### `fclose()`

- `fclose()` is used to close a file.

```c
fclose(file);
```

### `fread()` and `fwrite()`

- `fread()` and `fwrite()` are used to read and write binary data from and to files.

### `fgets()` and `fputs()`

- `fgets()` reads a line of text from a file.
- `fputs()` writes a string to a file.

## Error Handling

Error handling in I/O operations is essential. You can use `fprintf()` to write error messages to `stderr`. It's also crucial to check the return values of I/O functions for error conditions.

```c
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
    fprintf(stderr, "Error opening the file.\n");
    return 1;
}
```

## Example: Reading and Writing Files

```c
#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Writing to a file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file for writing.\n");
        return 1;
    }
    fputs("Hello, world!", file);
    fclose(file);

    // Reading from a file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening the file for reading.\n");
        return 1;
    }
    fgets(data, sizeof(data), file);
    fclose(file);

    printf("Data from file: %s\n", data);

    return 0;
}
```

In this example:

- We open a file called "example.txt" for writing and write the string "Hello, world!" to it using `fputs()`.
- Then, we open the same file for reading and use `fgets()` to read the data into the `data` array.
- Finally, we display the data on the screen.

