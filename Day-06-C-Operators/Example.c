#include<stdio.h>

int main(){

    int num1 = 190;
    int num2 = 3;

    // Arithmetic Operators

    printf("%d\n",num1+num2);

    printf("%d\n",num1-num2);

    printf("%d\n",num1*num2);

    printf("%d\n",num1/num2);

    printf("%d\n",num1%num2);


    // Relational Operators

    // 1 = T
    // 0 = F

    printf("%d\n",num1 < num2);
    printf("%d\n",num1 > num2);

    printf("%d\n",num1 == num2);
    printf("%d\n",num1 != num2);


    printf("%d\n",num1 <= num2);
    printf("%d\n",num1 >= num2);

// Logical Operators
// and &&

printf("%d\n",num1 >= num2 && num2 == num1);

// or ||

printf("%d\n",num1 >= num2 || num2 == num1);
// not !

printf("%d\n",num1 != num2);


// Assignment Operator

int a = 45;
//a = a + 10;
a += 10;
printf("%d\n",a);

//Increment and Decrement Operators

int number = 10;
number++; // Increment
 
printf("%d\n",number);

number--; //Decrement

printf("%d\n",number);


    return 0;
}