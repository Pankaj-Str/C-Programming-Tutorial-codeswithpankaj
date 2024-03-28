#include<stdio.h>
// function with arg. without return
void user_info(int age , char name[]){
   printf("your name is : %s\n ",name);
   printf("your age is : %d\n ",age); 
}

void bill(int price , int gst){

    int gst_amount = price*gst/100;
    int final_price = price + gst_amount;
    printf("\n----------bill-----------\n");
    printf("Price : %d\n",price);
    printf("GST : %d\n",gst);
    printf("GST - Amount  : %d\n",gst_amount);
    printf("MRP - Amount  : %d\n",final_price);

}
int main(){

    // calling function
    user_info(56,"joy");
    user_info(12,"toy");

    // calling function 
    bill(1200,18);
    bill(1800,9);
    bill(75000,10);

    return 0;
}