# Command-Line Arguments in C

Command-line arguments allow you to pass parameters or options to a C program when you run it from the command line. These arguments provide a way to make your programs more flexible and customizable. In C, you can access command-line arguments through the `main` function's parameters. Here's how it works:

## `main` Function with Command-Line Arguments

The `main` function in C can accept two arguments:

```c
int main(int argc, char *argv[])
```

- `argc` (argument count): An integer that represents the number of command-line arguments.
- `argv` (argument vector): An array of strings where each element is a command-line argument, including the program name itself.

## Accessing Command-Line Arguments

You can access command-line arguments by using the `argc` and `argv` parameters in the `main` function. Here's a simple example:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of command-line arguments: %d\n", argc);
    
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```

In this program:

- `argc` contains the number of command-line arguments, which includes the program name itself.
- `argv` is an array of strings where each element represents a command-line argument.

## Running the Program

To run a C program with command-line arguments, open your command prompt or terminal and navigate to the directory containing the compiled program. Then, enter the program name followed by any arguments you want to pass.

For example, if you've compiled your program as `myprogram`, you can run it like this:

```
./myprogram arg1 arg2 arg3
```

- `./myprogram` is the name of the program.
- `arg1`, `arg2`, and `arg3` are the command-line arguments.

## Use Cases

Command-line arguments are useful for various purposes, such as:

- Providing input data or configuration parameters to your program.
- Specifying input and output file names.
- Enabling or disabling specific program features or modes.
- Passing options or flags to customize program behavior.

## Parsing Command-Line Arguments

In more complex programs, you might need to parse and interpret the command-line arguments. You can use libraries like `getopt` to handle option parsing, or you can implement custom argument parsing logic.

Here's an example using the `getopt` library to parse command-line options:

```c
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    while ((opt = getopt(argc, argv, "abc:")) != -1) {
        switch (opt) {
            case 'a':
                printf("Option a is set\n");
                break;
            case 'b':
                printf("Option b is set\n");
                break;
            case 'c':
                printf("Option c is set with value: %s\n", optarg);
                break;
            default:
                printf("Unknown option\n");
                break;
        }
    }

    return 0;
}
```

In this example, we're using `getopt` to parse options and their arguments. The program expects options `-a`, `-b`, and `-c`, and the `-c` option requires an argument.

## Conclusion

Command-line arguments provide a way to make C programs more flexible and customizable. By accessing and parsing these arguments using the `main` function's parameters and libraries like `getopt`, you can create versatile and powerful programs that can be configured and customized at runtime through the command line.
