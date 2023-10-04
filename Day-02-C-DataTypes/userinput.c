#include<stdio.h>
int main(){

    char name[50];
    int age;
    float height;

    printf("Enter Your Name -- \n");
    scanf("%s",name);
    printf("Enter Your age -- \n");
    scanf("%d",&age);
    printf("Enter Your height -- \n");
    scanf("%f",&height);

    printf("---------------\n");
    printf("------your name %s\n",name);
    printf("------your age %d\n",age);
    printf("------your height %f\n",height);


}