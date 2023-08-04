#include<stdio.h>
int main(){

    int table;

    printf("\n enter table number \n");
    
    scanf("%d",&table);
    for(int a = 1 ; a <= 10; a++ ){
        printf("%d",table);
        printf(" x ");
        printf("%d",a);
        printf(" = ");
        printf("%d\n",a*table);
        


    }

    return 0;
}