#include<stdio.h>
int main(){

    char name[] = "joy";
    char char_ltr = 'a';
    int age = 12;
    float height = 3.4;

    printf("Name: %s\n",name); //print the string value of variable name
    printf("Char Letter: %c\n",char_ltr);// print the character value of variable char_ltr
    printf("Age: %d \n",age);//print the integer value of variable age
    printf("Height: %.2f \n",height);//print the floating-point number with two decimal places


    return 0;
}