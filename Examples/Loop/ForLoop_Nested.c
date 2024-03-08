#include<stdio.h>

int main(){

    int a,i;

    for(i=1; i<=5; i++){

        for(a=1; a<=i; a++){

            printf(" X ");
        }

        printf("\n");

    }


    return 0;
}