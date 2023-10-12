# C File I/O (Input/Output)

File Input/Output (I/O) operations in C are crucial for reading and writing data to and from external files. Understanding file I/O allows C programs to interact with external data sources, making it an essential skill for various applications, from simple text file processing to complex data storage and retrieval.

## Key Concepts

Before diving into file I/O operations, let's cover some essential concepts and libraries:

### Standard Streams

C programs use three standard streams for I/O operations:

1. **`stdin` (Standard Input)**: Used for reading data from the keyboard or other input sources.

2. **`stdout` (Standard Output)**: Used for writing data to the screen or console.

3. **`stderr` (Standard Error)**: Used for writing error messages or diagnostic information to the screen.

### File Pointers

File pointers are essential for working with files. You use file pointers to open, read, write, and close files. Common file functions include `fopen()`, `fclose()`, `fread()`, `fwrite()`, `fscanf()`, `fprintf()`, and more.

## Opening and Closing Files

### `fopen()`

The `fopen()` function is used to open a file. It returns a file pointer, which is a reference to the opened file.

```c
FILE *file = fopen("example.txt", "r");
```

- The first argument is the filename.
- The second argument specifies the file access mode, such as "r" (read), "w" (write), "a" (append), and more.

### `fclose()`

The `fclose()` function is used to close a file when you're done working with it.

```c
fclose(file);
```

Closing files is important to ensure data integrity and free up system resources.

## Reading from Files

### `fread()`

The `fread()` function is used for reading binary data from a file. It reads a specified number of bytes into a buffer.

```c
size_t fread(void *ptr, size_t size, size_t count, FILE *file);
```

- `ptr` is a pointer to the buffer where the data is read.
- `size` is the size in bytes of each item to be read.
- `count` is the number of items to be read.
- `file` is the file pointer.

### `fgets()`

The `fgets()` function is used for reading text data from a file line by line.

```c
char *fgets(char *str, int num, FILE *file);
```

- `str` is the buffer where the data is read.
- `num` is the maximum number of characters to be read.
- `file` is the file pointer.

## Writing to Files

### `fwrite()`

The `fwrite()` function is used for writing binary data to a file.

```c
size_t fwrite(const void *ptr, size_t size, size_t count, FILE *file);
```

- `ptr` is a pointer to the data to be written.
- `size` is the size in bytes of each item to be written.
- `count` is the number of items to be written.
- `file` is the file pointer.

### `fprintf()`

The `fprintf()` function is used for writing formatted text data to a file.

```c
int fprintf(FILE *file, const char *format, ...);
```

- `file` is the file pointer.
- `format` is the format string, similar to `printf()`.

## File Operations Example

Here's an example of reading from and writing to a file:

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

- We open "example.txt" for writing using `fopen()` with the "w" mode and write "Hello, world!" to it with `fputs()`.
- Then, we open the same file for reading with the "r" mode and use `fgets()` to read the data into the `data` array.
- Finally, we display the data on the screen.

