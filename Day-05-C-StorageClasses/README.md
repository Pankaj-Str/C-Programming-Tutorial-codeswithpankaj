# C - Storage Classes

In C programming, storage classes define the scope, lifetime, and visibility of variables. C supports four primary storage classes:

1. **Automatic Storage Class (auto)**:
   - Variables declared as `auto` have local scope within the block or function where they are defined.
   - They are created when the block is entered and destroyed when the block is exited.
   - By default, local variables have automatic storage.

   ```c
   void someFunction() {
       auto int x; // Same as: int x;
       // 'x' is an automatic variable
   }
   ```

2. **Register Storage Class (register)**:
   - Variables declared as `register` are stored in CPU registers for faster access.
   - They have the same scope and lifetime as automatic variables.
   - The `register` keyword is a hint to the compiler, and it's used less frequently because modern compilers are good at optimizing variable access.

   ```c
   void someFunction() {
       register int counter;
       // 'counter' is a register variable (hint to the compiler)
   }
   ```

3. **Static Storage Class (static)**:
   - Variables declared as `static` have a lifetime throughout the program's execution.
   - They are initialized only once, at the start of the program, and retain their values between function calls.
   - `static` variables have file scope by default, meaning they are visible only within the current source file. To make them global, you can use the `extern` keyword in another source file.

   ```c
   void someFunction() {
       static int count = 0; // 'count' is a static variable
       count++;
   }
   ```

4. **External Storage Class (extern)**:
   - Variables declared as `extern` have global scope and are visible to multiple source files.
   - They are often used to share variables between different parts of a program.
   - The actual variable is defined in another source file (or sometimes in the current file).

   ```c
   // In file1.c
   int globalVar = 42; // 'globalVar' is defined here

   // In file2.c
   extern int globalVar; // Declare 'globalVar' from file1.c
   ```

These storage classes control where and how variables are stored in memory, their visibility, and their lifetime. Properly choosing the right storage class for your variables is important for managing memory efficiently and ensuring correct program behavior.