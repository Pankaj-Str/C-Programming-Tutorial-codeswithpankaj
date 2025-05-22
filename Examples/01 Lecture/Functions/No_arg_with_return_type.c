#include<stdio.h>

// funtion - with return type, no parameters(arguments)


// example :


// 1. function to return the square of a number

int square(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    return a*a;
}

// 2. function to return the cube of a number

int cube(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    return a*a*a;
}

int main(){
    
    // function call
    int s = square();
    printf("The square of the number is %d\n", s);
    
    int c = cube();
    printf("The cube of the number is %d\n", c);
    
    return 0;
}