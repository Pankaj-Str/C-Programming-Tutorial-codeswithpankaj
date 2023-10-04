# C - Basic Syntax
```
1. Tokens in C
2. Semicolons
3. Comments
4. Identifiers
5. Keywords
6. Whitespace in C

```

1. Tokens in C:
   In C programming, a token is the smallest unit of a program, and the compiler uses tokens to understand and parse the code. Tokens can be classified into several categories, including keywords, identifiers, constants, operators, and punctuation symbols. Here are some examples of tokens:

   - Keywords: `if`, `while`, `int`, `float`, `return`
   - Identifiers: `variableName`, `function_name`, `myVar`
   - Constants: `42`, `3.14`, `'A'`
   - Operators: `+`, `-`, `*`, `/`, `==`
   - Punctuation Symbols: `;`, `,`, `()`, `{}`, `[]`

2. Semicolons:
   In C, the semicolon (`;`) is used as a statement terminator. It is placed at the end of most C statements to indicate the end of that statement. For example:

   ```c
   int x = 10; // Declaration and initialization statement
   printf("Hello, World!"); // Function call statement
   x = x * 2; // Assignment statement
   ```

   Each of these statements ends with a semicolon.

3. Comments:
   Comments are used in C to add explanatory notes or documentation to your code. Comments are ignored by the compiler and are meant for human readability. C supports two types of comments:

   - Single-line comments start with `//` and continue until the end of the line. For example:

     ```c
     // This is a single-line comment
     ```

   - Multi-line comments are enclosed between `/*` and `*/` and can span multiple lines. For example:

     ```c
     /*
     This is a
     multi-line comment
     */
     ```

4. Identifiers:
   Identifiers in C are used to name variables, functions, and other user-defined items. They must follow certain rules:
   - An identifier must start with a letter (uppercase or lowercase) or an underscore `_`.
   - After the initial character, an identifier can consist of letters, digits, and underscores.
   - Identifiers are case-sensitive.

   Examples of valid identifiers:
   - `myVariable`
   - `_count`
   - `func123`

5. Keywords:
   Keywords in C are reserved words that have predefined meanings and cannot be used as identifiers. Some common keywords in C include `if`, `else`, `while`, `int`, `float`, and `return`. These words are used for control flow, data types, and program structure.


|:-------------:|:---:|:---:|:---:|:-------------:|:---:|:---:|:---:|
| auto          | break   | case     | char      | const         | continue | default | do        |
| double        | else    | enum     | extern    | float         | for      | goto    | if        |
| int           | long    | register | return    | short         | signed   | sizeof  | static    |
| struct        | switch  | typedef  | union     | unsigned      | void     | volatile| while     |


1. Whitespace in C:
   Whitespace refers to spaces, tabs, and newline characters in your code. In C, whitespace is used for formatting and readability but is generally ignored by the compiler. For example, you can use whitespace to format your code like this:

   ```c
   int main() {
       int x = 10;
       if (x > 5) {
           printf("x is greater than 5\n");
       }
       return 0;
   }
   ```

   The spaces and indentation are not significant to the compiler but make the code more readable for humans.