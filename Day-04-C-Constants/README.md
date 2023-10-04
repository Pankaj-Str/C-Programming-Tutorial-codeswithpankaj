# C - Constants

In C programming, constants are values that do not change during the execution of a program. They are used to represent fixed values or parameters in your code. Constants provide several benefits, including code readability and maintainability. C supports different types of constants, including numeric constants, character constants, and symbolic constants.

Here are some common types of constants in C:

1. **Numeric Constants**:
   - **Integer Constants**: These are whole numbers without a decimal point.

     ```c
     int num = 42;
     ```

   - **Floating-Point Constants**: These include a decimal point or use exponential notation.

     ```c
     float pi = 3.14159265359;
     ```

2. **Character Constants**:
   - **Character constants** are single characters enclosed in single quotes (' ').

     ```c
     char grade = 'A';
     ```

   - **Escape Sequences**: Special characters can be represented using escape sequences, such as `\n` for a newline or `\t` for a tab.

     ```c
     char newline = '\n';
     ```

3. **String Constants**:
   - Strings are sequences of characters enclosed in double quotes (" ").

     ```c
     char greeting[] = "Hello, World!";
     ```

4. **Symbolic Constants**:
   - Symbolic constants are defined using the `#define` preprocessor directive and are typically used to represent meaningful names for fixed values or parameters.

     ```c
     #define PI 3.14159265359
     ```

     After defining a symbolic constant, you can use it throughout your code, and the preprocessor will replace all instances of `PI` with its value during compilation.

     ```c
     float circumference = 2 * PI * radius;
     ```

5. **Enumeration Constants**:
   - Enumeration constants are defined using the `enum` keyword and are used to create named integer constants.

     ```c
     enum Weekday {
         MONDAY,
         TUESDAY,
         WEDNESDAY,
         THURSDAY,
         FRIDAY
     };
     ```

     In this example, `MONDAY`, `TUESDAY`, etc., are enumeration constants with integer values starting from 0.

Constants help make your code more readable, self-explanatory, and easier to maintain because they give meaningful names to values. By using constants, you can avoid "magic numbers" in your code, which are hard-coded numerical values that lack context. Instead, you can use symbolic constants to make your code more understandable and maintainable.
