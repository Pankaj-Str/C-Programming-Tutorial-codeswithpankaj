#include<stdio.h>

int main(){

    // using sizeof()

    char name[] = "joy";

    printf("your name is %s\n",name);

    // find the size of name

    int size = sizeof(name);
    printf("the size of name is %d\n",size);


    return 0;
}