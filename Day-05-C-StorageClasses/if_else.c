#include <stdio.h>


int main(void){

    // # if...else statement

    // #if(condition)
    //     # code block if the condition is true 
    // #else:
    //     #code block if the condition is false   

    int number1 = 100;
    int number2 = 20;

    if (number1 < number2)
    {
        printf("Number 1 is smallest ... %d\n",number1);
    }else{
        printf("Number 1 is not smallest ... %d\n",number1);
    }
    

    return 0;
}