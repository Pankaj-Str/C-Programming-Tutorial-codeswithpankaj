#include<stdio.h>

int main(){

    // print week Days Name using Switch case

    printf("Enter Week Day number \n");
    int day;
    scanf("%d",&day);

    switch (day)
    {
    case 1: printf("Day Name is SunDay \n");
    break;
    case 2: printf("Day Name is Monday \n");
    break;
    case 3: printf("Day Name is Tuesday \n");
    break;
    case 4: printf("Day Name is Wednesday \n");
    break;
    case 5: printf("Day Name is Thursday \n");
    break;
    case 6: printf("Day Name is Friday \n");
    break;
    case 7: printf("Day Name is Saturday \n");
    break;
    default: printf("Invalid Day Number \n");
    break;
    }


    return 0;
}