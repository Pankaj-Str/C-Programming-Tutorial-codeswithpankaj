#include<stdio.h>

// no return type but with arguments

void printMessage(char message[])
{
    printf("%s\n", message);
}

// example 1

void getgst(int amount)
{
    float gst = amount * 0.18;
    printf("GST: %f\n", gst);
}


int main()
{
    char message[] = "Hello World";
    printMessage(message);
    getgst(1000);
    getgst(2000);
    return 0;
}