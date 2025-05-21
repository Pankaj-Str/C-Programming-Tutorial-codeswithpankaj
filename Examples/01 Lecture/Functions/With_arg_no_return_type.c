#include<stdio.h>

// function - no return type, with parameters(arguments)

// example :

// 1. function to add two numbers

void add(int a, int b){
    printf("The sum of %d and %d is %d\n", a, b, a+b);
}

int main(){
    
    // function call
    add(10, 20);
    add(30, 40);
    add(50, 60);
    add(70, 80);
    add(90, 100);

    return 0;
}