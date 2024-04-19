#include<stdio.h>

// with return type and no arguments

// example 

int getnumber(){

    return 900;
}




int getgst()
{   
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    float gst = amount * 0.18;
    return gst;
}


int main()
{
    int number = getnumber();
    printf("Number: %d\n", number);
    float gst1 = getgst();
    printf("GST: %f\n", gst1);

    return 0;
}