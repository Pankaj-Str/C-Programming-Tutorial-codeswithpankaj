#include<stdio.h>


// function with arg....

void  print_result(int a, int b) {

    int result = a + b;

    printf("Result is : %d\n",result);

}



void bill(int price , int gst){

        int gst_amount =  price * gst / 100;
        int mrp  = price + gst_amount;
        printf("\n----------------\n");
        printf("MRP is : %d\n",mrp);
        printf("GST is : %d\n",gst_amount);
        printf("GST  is : %d\n",gst);
        printf("Price is : %d\n",price);
        printf("\n-----------------\n");
    
}



int main(){

    print_result(1200,56);
    print_result(1450,5678);

    bill(1200,9);
    bill(2300,18);
    bill(900,2);


    return 0;
}