# C - Operators

In C programming, operators are used to perform various operations on variables and values. Here are some common C operators with examples:

1. **Arithmetic Operators**:

   ```c
   int a = 10, b = 5;
   int sum = a + b;     // Addition
   int difference = a - b;  // Subtraction
   int product = a * b;    // Multiplication
   int quotient = a / b;   // Division
   int remainder = a % b;  // Modulus (remainder)
   ```

2. **Relational Operators**:

   ```c
   int x = 7, y = 12;
   bool isEqual = (x == y);   // Equal to
   bool isNotEqual = (x != y);  // Not equal to
   bool isGreaterThan = (x > y);  // Greater than
   bool isLessThan = (x < y);   // Less than
   bool isGreaterOrEqual = (x >= y); // Greater than or equal to
   bool isLessOrEqual = (x <= y);   // Less than or equal to
   ```

3. **Logical Operators**:

   ```c
   bool p = true, q = false;
   bool andResult = p && q;  // Logical AND
   bool orResult = p || q;   // Logical OR
   bool notResult = !p;     // Logical NOT
   ```

4. **Assignment Operator**:

   ```c
   int num = 42;
   num += 10; // Equivalent to num = num + 10;
   ```

5. **Increment and Decrement Operators**:

   ```c
   int count = 5;
   count++;  // Increment by 1
   count--;  // Decrement by 1
   ```

6. **Conditional (Ternary) Operator**:

   ```c
   int age = 18;
   char* message = (age >= 18) ? "You can vote" : "You cannot vote";
   ```

7. **Bitwise Operators** (used for bitwise operations):

   ```c
   int a = 5, b = 3;
   int bitwiseAnd = a & b;  // Bitwise AND
   int bitwiseOr = a | b;   // Bitwise OR
   int bitwiseXOR = a ^ b;  // Bitwise XOR
   int bitwiseNot = ~a;     // Bitwise NOT
   int leftShift = a << 2;  // Left shift by 2 bits
   int rightShift = a >> 1; // Right shift by 1 bit
   ```

8. **Comma Operator**:

   ```c
   int x = 5, y = 10, z = 15;
   int result = (x += 1, y += 2, z += 3); // Evaluates expressions and returns the value of the last one (z)
   ```

9. **Member Selection Operator** (used with structures):

   ```c
   struct Point {
       int x;
       int y;
   };
   
   struct Point p1;
   p1.x = 3;
   p1.y = 4;
   ```

10. **Pointer Operators** (used for working with pointers):

    ```c
    int num = 42;
    int* ptr = &num; // Pointer declaration and initialization
    int value = *ptr; // Dereferencing pointer to get the value
    ```

These are some of the most commonly used operators in C. Operators are essential for performing operations and calculations in your C programs, and understanding how to use them is fundamental to C programming.