#include<stdio.h>

// basic function without arg. and without return type

void get_info(){

    printf("welcome to codeswithpankaj.com \n");

}

// with arg. and without return type
void get_result(int num1 , int num2){
    int result;
    result = num1 + num2;
    printf("%d\n",result);

}

// example:
void tax(int price,int gst){
    int gst_amount = price*gst/100;
    int total_price = gst_amount + price;
    printf("\n-----------bill-------------\n");
    printf("Price : %d\n ",price);
    printf("GST : %d\n ",gst);
    printf("GST Amount : %d\n ",gst_amount);
    printf("Final MRP : %d\n ",total_price);
}

// without arg. with return type 

int get_tax(){

    return 800;
}

// with arg. with return type 

int get_total(int a,int b){

    int result = a + b;
    return result;

}


int main(){

    //get_info();
    //get_info();
    //get_result(23,90);
    tax(1200,18);
    tax(4500,9);

    int get_num = get_tax();
    printf("%d\n",get_num);

    int get_totals = get_total(300,800);

    printf("%d\n",get_totals+1000);

    return 0;
}
