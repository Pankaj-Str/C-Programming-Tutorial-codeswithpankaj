#include<stdio.h>

int main(){

    char Emp_name[20];
    int Emp_id;
    float Emp_salary;
    char Emp_designation[20];
    char Emp_department[20];
    char Emp_address[50];
    char Emp_contact[15];
    char Emp_email[30];

    // take user input 
    printf("\n Enter Employee Name \n");
    scanf("%s",Emp_name);
    printf("\n Enter Employee ID \n");
    scanf("%d",&Emp_id);
    printf("\n Enter Employee Salary \n");
    scanf("%f",&Emp_salary);
    printf("\n Enter Employee Designation \n");
    scanf("%s",Emp_designation);
    printf("\n Enter Employee Department \n");
    scanf("%s",Emp_department);
    printf("\n Enter Employee Address \n");
    scanf("%s",Emp_address);
    printf("\n Enter Employee Contact Number \n");
    scanf("%s",Emp_contact);
    printf("\n Enter Employee Email \n");
    scanf("%s",Emp_email);

    // print all records 
    printf("\n Employee Records \n");
    printf("Employee Name : %s \n",Emp_name);
    printf("Employee ID : %d \n",Emp_id);
    printf("Employee Salary : %.2f \n",Emp_salary);
    printf("Employee Designation : %s \n",Emp_designation);
    printf("Employee Department : %s \n",Emp_department);
    printf("Employee Address : %s \n",Emp_address);
    printf("Employee Contact Number : %s \n",Emp_contact);
    printf("Employee Email : %s \n",Emp_email);
    

    return 0;
}