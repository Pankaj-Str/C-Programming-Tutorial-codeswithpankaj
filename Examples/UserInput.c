#include<stdio.h>
int main(){

    char name[10];
    char char_ltr;
    int age;
    float height;
    printf("Enter your Name: ");
    scanf("%s",&name);
    printf("Enter char ltr \n");
    scanf(" %c",&char_ltr);
    printf("\nEnter your Age: ");
    scanf( "%d",&age);
    printf("\nEnter your Height in cm");
    scanf("%f",&height);
    
    // Printing the details of user 

    printf("Name: %s\n",name); //print the string value of variable name
    printf("Char Letter: %c\n",char_ltr);// print the character value of variable char_ltr
    printf("Age: %d \n",age);//print the integer value of variable age
    printf("Height: %.2f \n",height);//print the floating-point number with two decimal places


    return 0;
}