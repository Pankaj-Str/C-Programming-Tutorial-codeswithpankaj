#include<stdio.h>
int main(){

    // take user input of month number 

    printf("Enter Month Number - \n");
    int MonthNumber;

    scanf("%d",&MonthNumber);

    // check with switch case :

    switch (MonthNumber)
    {
        /* constant-expression */ 
        case 1 : printf("January\n");
        break;
        case 2 : printf("February\n");
        break;
        case 3 : printf("March\n");
        break;
        case 4 : printf("April\n");
        break;
        case 5 : printf("May\n");
        break;
        case 6 : printf("June\n");
        break;
        case 7 : printf("July\n");
        break;
        case 8 : printf("August\n");
        break;
        case 9 : printf("September\n");
        break;
        case 10 : printf("October\n");
        break;
        case 11 : printf("November\n");
        break;
        case 12 : printf("December\n");
        break;
        default : printf("Plz Enter only 1 - 12 Number \n");
        break;
    }


    return 0;
}