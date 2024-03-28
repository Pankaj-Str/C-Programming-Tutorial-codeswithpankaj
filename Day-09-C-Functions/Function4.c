#include<stdio.h>
// basic function with arg. with return
int info(int a , int b){
    int result = a + b;
    return result;
}
int main(){

    // calling function
    int data = info(56,45);
    printf("data : %d",data);



    return 0;
}