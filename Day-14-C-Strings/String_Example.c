#include<stdio.h>

int main(){ 


    // char name[]  = "John";

    // printf("your name is %s ",name);

    // take user input

    char name[10];

    // scanf("%s",&name);
    printf("Enter your name is");
    fgets(name, 10, stdin);

    printf("your name is %s ",name);



    return 0;
}