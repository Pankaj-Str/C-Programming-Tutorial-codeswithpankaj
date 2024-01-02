#include<stdio.h>

int main(){
    printf("Enter Days Number 1 - 7");
    int day = 8;
    scanf("%d",&day);

    switch (day)
    {
    case 1 : printf("it's Monday");
        break;
    case 2 : printf("it's Tuesday");
        break;
    case 3 : printf("it's WEN");
        break;
    case 4 : printf("it's THS");
        break;
    case 5 : printf("it's FIR");
        break; 
    case 6 : printf("it's SAT");
        break; 
    case 7 : printf("it's SUN");
        break;                      
    
    default: printf(" Plz Enter Only 1 - 7");
        break;
    }


    return 0;
}