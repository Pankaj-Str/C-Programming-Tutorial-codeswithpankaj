#include <stdio.h>
int main(){

        // and &&
        // left side | right side = result
        //      T    |     T      =   T
        //      T    |     F      =   F
        //      F    |     T      =   F
        //      F    |     F      =   F

        printf("%d\n",(23 < 89 && 56 == 90));

        // or ||

        // or
        // left side | right side = result
        //      T    |     T      =   T
        //      T    |     F      =   T
        //      F    |     T      =   T
        //      F    |     F      =   F

         printf("%d\n",(23 < 89 || 56 == 90));

        // not !

         printf("%d\n",(56 != 90));
    return 0;
}