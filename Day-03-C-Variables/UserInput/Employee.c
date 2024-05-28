#include<stdio.h>

int main(){

    // take user input employee info

    char name[20];
    int age;
    float salary;
    char department[20];
    char position[20];

    printf("Enter Employee Name \n");
    scanf("%s",name);
    printf("Enter Employee Age \n");
    scanf("%d",&age);
    printf("Enter Employee Salary \n");
    scanf("%f",&salary);
    printf("Enter Employee Department \n");
    scanf("%s",department);
    printf("Enter Employee Position \n");
    scanf("%s",position);


    // print all record 

    printf("Employee Name : %s\n",name);
    printf("Employee Age : %d\n",age);
    printf("Employee Salary : %.2f\n",salary);
    printf("Employee Department : %s\n",department);
    printf("Employee Position : %s\n",position);



}