#include <stdio.h>


int main()
{
    printf("Enter Your Day No...\n");
    int DayNo;
    scanf("%d",&DayNo);

    switch(DayNo){
        case 1 : printf(" - Monday \n");
        break;
        case 2 : printf(" - Tuesday \n");
        break;
        case 3 : printf(" - Wednesday \n");
        break;
        case 4 : printf(" - Thursday \n");
        break;
        case 5 : printf(" - Friday \n");
        break;
        case 6 : printf(" - Saturday \n");
        break;
        case 7 : printf(" - Sunday \n");
        break;
        default : printf("Day not found plz enter only 1 to 7 \n");
    }

    return 0;
}