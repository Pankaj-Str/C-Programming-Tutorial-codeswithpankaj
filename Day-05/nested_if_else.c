#include <stdio.h>


int main(void){

    // # if...else statement

    // #if(condition)
    //     # code block if the condition is true 
    // #else: 
        // #if(condition)
        //     # code block if the condition is true 
        // #else:
        //     #code block if the condition is false 
   

    int number1 = 10;
    int number2 = 20;
    int number3 = 21;

    if (number1 < number2 && number1 < number3)
    {
        printf("Number 1 is smallest ... %d\n",number1);
    }else{
        
        if (number2 < number1 && number2 < number3)
        {
            printf("Number 2 is smallest ... %d\n",number2);
        }else{
            printf("Number 3 is smallest ... %d\n",number3);
        }

    }
    

    return 0;
}