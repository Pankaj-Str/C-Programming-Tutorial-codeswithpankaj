#include<stdio.h>

// with return type and arguments


float getgst(int amount,int gst)
{
    float gst1 = amount * gst/100;
    return gst1;
}


int main()
{
    int amount;
    int gst;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("Enter the GST percentage: ");
    scanf("%d", &gst);
    float gst1 = getgst(amount,gst);
    printf("GST: %f\n", gst1);

    return 0;
}