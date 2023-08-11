#include<stdio.h>

//function with arguments and with return value

int bmi(float height,int weight){

    int BMI = (weight*100)/weight;

    return BMI;

}

int main(){

    //calling Function...

    printf("%d\n",bmi(6.3,81));

    return 0;
}