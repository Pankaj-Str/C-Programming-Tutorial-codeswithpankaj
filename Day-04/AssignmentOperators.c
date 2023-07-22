#include <stdio.h>
int main(){


    //Assignment Operators:
    //Simple Assignment (=): Assigns a value to a variable.

    int n1;
    n1 = 100;
    printf("%d\n",n1);
    // Compound Assignment Operators (+=, -=, *=, /=, %=): Performs an arithmetic operation and assigns the result to the left operand.

    //n1 = n1 + 10;
    n1 += 10;
    printf("%d\n",n1);
     n1 -= 10;
    printf("%d\n",n1);
     n1 /= 10;
    printf("%d\n",n1);
     n1 *= 10;
    printf("%d\n",n1);
     n1 %= 10;
    printf("%d\n",n1);



return 0;
}