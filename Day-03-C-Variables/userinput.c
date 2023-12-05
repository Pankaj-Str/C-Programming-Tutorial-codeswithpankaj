#include<stdio.h>

int main(){

    char name[20];
    int age;
    float height;

    printf("Your name is\n");
    scanf("%s",&name);
    printf("your age is :\n");
    scanf("%d",&age);
    printf("Your Height is :\n"); 
    scanf("%f",&height);

    printf("Your name is : %s\n",name);
    printf("your age is : %d\n",age);
    printf("Your Height is : %2f\n",height); 


    return 0;
}