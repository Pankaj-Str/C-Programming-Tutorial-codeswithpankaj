#include<stdio.h>

int main(){

    int number = 100;

    printf("%d",number);

    // printf("%p",number);
    
    int  *ptr = &number;

    printf("\n%p",&number);

    int value = *ptr;
    printf("\n%d",value);

    





    return 0;
}