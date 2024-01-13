# Decision making in C


Decision making in C involves making choices in your program based on certain conditions or criteria. C provides various constructs for decision making, including `if` statements, `else if` statements, `else` statements, and switch statements. Here are examples of these constructs:

1. `if` Statement:

   The `if` statement is used to execute a block of code if a specified condition is true.

```c
#include <stdio.h>

int main() {
    int age = 18;

    if (age >= 18) {
        printf("You are eligible to vote!\n");
    }

    return 0;
}
```

2. `if-else` Statement:

   The `if-else` statement is used to execute one block of code if a condition is true and another block if the condition is false.

```c
#include <stdio.h>

int main() {
    int num = 10;

    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
```

3. `else if` Statement:

   The `else if` statement is used to test multiple conditions in sequence and execute the block of code associated with the first true condition.

```c
#include <stdio.h>

int main() {
    int score = 85;

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
```

4. `switch` Statement:

   The `switch` statement allows you to select one of many code blocks to be executed, based on the value of an expression.

```c
#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Fair!\n");
            break;
        case 'D':
            printf("Needs improvement!\n");
            break;
        default:
            printf("Invalid grade!\n");
    }

    return 0;
}
```

These decision-making constructs allow you to control the flow of your program and make it more responsive to different conditions and inputs.

### Example 1: Checking if a Number is Even or Odd

```python
num = 7

if num % 2 == 0:
    print(f"{num} is even.")
else:
    print(f"{num} is odd.")
```

In this example, the program checks if the remainder of `num` divided by 2 is equal to 0. If it is, the number is even; otherwise, it's odd.

### Example 2: Determining the Sign of a Number

```python
number = -5

if number > 0:
    print(f"{number} is positive.")
elif number < 0:
    print(f"{number} is negative.")
else:
    print(f"{number} is zero.")
```

Here, the program checks whether a number is positive, negative, or zero using a combination of `if`, `elif` (else if), and `else` statements.

## Nested `if-else` Statements

In Python, you can nest `if-else` statements inside one another. This allows for more complex decision-making logic.

```python
x = 10

if x > 0:
    if x % 2 == 0:
        print(f"{x} is a positive even number.")
    else:
        print(f"{x} is a positive odd number.")
else:
    print(f"{x} is non-positive.")
```

In this example, the program first checks if `x` is positive. If it is, it further checks whether it's even or odd. If `x` is not positive, it prints that `x` is non-positive.

## Ternary Conditional Expression

Python also supports a concise version of the `if-else` statement known as the ternary conditional expression.

```python
result = "Even" if num % 2 == 0 else "Odd"
print(result)
```

This is equivalent to the first example but in a more compact form.

## Conclusion

The `if-else` statement in Python is a versatile tool that enables developers to create dynamic and flexible programs. Whether it's handling simple conditions or complex decision trees, understanding how to use `if-else` statements is crucial for any Python programmer. As you delve deeper into programming, you'll find that mastering conditional statements is a key step toward writing efficient and responsive code.

Visit [Codes with Pankaj](https://codeswithpankaj.com) for more insightful articles and tutorials on Python programming and other coding topics.


## Question - 

1. Write a  Program to Check Whether a Number is Even or Odd.?
   
   ```yaml
   Enter Number to Find Even or odd = 3
    
   -- Your Number 3 is Odd 
   ```
2. Write a  Program to Check Whether an Alphabet is Vowel or Consonant ?

   ```yaml
   Enter Alphabet : A
    
   -- A is Vowel 
   ```
3. Write a  Program to Find the Largest Among Three Numbers ?
    
    ```yaml
    Enter Number 1 : 100
    Enter Number 2 : 300
    Enter Number 3 : 400 
    -- Number 300 is Largest 
    ```

4. Write a  Program to Check Leap Year ?

    ```yaml
   Enter Year : 2023 

   -- 2023 is not Leap Year 
   ```

5. Write a program to find Grade ?
   
   ```yaml
   Example : Grading System 
   80 - 100 = Grade A
   60 - 80 = Grade B
   40 - 60 = Grade C
   30 - 40 = Grade D
   0  - 30 Grade F

   ```

6. Find Age ?
   
   ```yaml
   -- Date of birth Section 

   Enter Your Birth Year : 1992
   Enter Your Birth Month : 4
   Enter Your Birth Day : 16

   -- Current Date

   Enter Your Current Year : 2023
   Enter Your Current Month : 7
   Enter Your Current Day : 26 

   -- output
   
   30 years 3 months 10 days
   or 363 months 10 days
   or 1579 weeks 5 days
   or 11,058 days
   or 265,392 hours
   
   ```

7. Password Checker 
Example : 
```yaml
   Set your password :
   p4n@in
   Enter your Password : 
   p4n
   wrong password ... try 2 more time out of 2
   p4n@
   wrong password ... try 1 more time 1
   p4n@34
   wrong password ... try 0 more time 0
   note : user select right password
   then start MCQ EXAM...
   
    
   1. Who invented Java Programming?
   1. ) Guido van Rossum
   2. ) James Gosling
   3. ) Dennis Ritchie
   4. ) Bjarne Stroustrup
   
   Select Answer 2
   
   wrong answer [ Try Next year ] 
   
   Note :if select Right Answer 
   ask 2nd Question ...
   
   2. Which component is used to compile, debug and execute the java programs?
   1. ) JRE
   2. ) JIT
   3. ) JDK
   4. ) JVM
   
   Select Answer 2 ... con..
```    

8. Student Report Card System
```Yaml
---- Input Section
Enter your name : Joy
Enter Your Roll Number : A1023

Enter Your JAVA Marks : 50
Enter Your C++ Marks : 20
Enter Your go Marks : 25
Enter Your Ruby Marks : 96
Enter Your C# Marks : 70
Enter Your Python Marks : 65

---- Output Section
JAVA = 50/100 
C++ = 20/100 F
go = 25/100 F
Ruby = 96/100
C# = 70/100
Python = 65/100

Total = 326/600
per = 54% FAIL
IF PASS
Grading System 
80 - 100 = Grade A
60 - 80 = Grade B
40 - 60 = Grade C
30 - 40 = Grade D
```
