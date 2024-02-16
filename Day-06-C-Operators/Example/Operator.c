#include<stdio.h>

int main(){

// Arithmetic Operators:
int a,b;
a = 24;
b = 3;
// Addition (+): Adds two operands.
printf("%d\n",(a+b));
// Subtraction (-): Subtracts the right operand from the left operand.
printf("%d\n",(a-b));
// Multiplication (*): Multiplies two operands.
printf("%d\n",(a*b));
// Division (/): Divides the left operand by the right operand.
printf("%d\n",(a/b));
// Modulus (%): Returns the remainder after division.
printf("%d\n",(a%b));

// Comparison Operators:
// 0 = F
// 1 = T
// Equal to (==): Checks if two operands are equal.
printf("Equal %d\n",(45 == 67));
// Not equal to (!=): Checks if two operands are not equal.
printf("Not Equal %d\n",(45 != 67));
// Greater than (>)
printf("Greater than  %d\n",(45 > 67));
// Less than (<)
printf("Less than  %d\n",(45 < 67));
// Greater than or equal to (>=)
printf("Greater than or equal  %d\n",(45 >= 30));
// Less than or equal to (<=)
printf("Less than or equal  %d\n",(45 <= 30));

// Assignment Operators:
// Simple Assignment (=): Assigns a value to a variable.
int number = 30;
printf("%d\n",number);
// Compound Assignment Operators (+=, -=, *=, /=, %=): Performs an arithmetic operation and assigns the result to the left operand.
// number = number + 10;
number += 10; // +=, -=, *=, /=, %=

printf("%d\n",number);

// Increment and Decrement Operators

// ++ / --

int num = 10;
++num;
printf("number is : %d\n",num);

--num;
printf("number is : %d\n",num);

// Logical Operators:

// Logical AND (&&): Returns true if both operands are true.
// and &&
// leftside | rightside | result 
//     t    |   t       |   t
//     t    |   f       |   f
//     f    |   t       |   f
//     f    |   f       |   f
printf("%d\n",(34 < 89 && 56 > 123));

// Logical OR (||): Returns true if either operand is true.
// leftside | rightside | result 
//     t    |   t       |   t
//     t    |   f       |   t
//     f    |   t       |   t
//     f    |   f       |   f
printf("%d\n",(34 < 89 || 56 > 123));

// Logical NOT (!): Reverses the logical state of an operand.

printf("%d\n",(34 != 89));

printf("%d\n",!(34==89));


    return 0;
}