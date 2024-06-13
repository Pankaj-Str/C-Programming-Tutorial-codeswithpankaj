#include <stdio.h>

void printSum(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

// gst cal

void gst(int price,int tax){

    int gst_amount = (price*tax)/100;
    int total_amount = price + gst_amount;
    printf("GST Amount: %d\n", gst_amount);
    printf("Total Amount: %d\n", total_amount);

}

int main() {
    printSum(10, 20);
    gst(100,18);
    
    return 0;
}