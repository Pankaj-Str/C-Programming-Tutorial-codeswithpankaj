#include<stdio.h>

int main(){

    // 1. initializationStatement (Start Point)
    // 2. testExpression (End Point)
    // 3. statements inside the body of loop (body)
    // 4. updateStatement (++/--) ++ [+1] , -- [-1]

    // for (initializationStatement; testExpression; updateStatement)
    // {
    // statements inside the body of loop
    // }

    for(int a = 0; a <= 10; a++){
        printf("%d\n",a);
    }

    return 0;
}