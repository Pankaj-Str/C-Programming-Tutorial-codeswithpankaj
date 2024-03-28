#include<stdio.h>

struct Employees
{
    int id;
    char name[10];
    char city[10];
    int salary;

};

int main(){

    struct Employees emp;
    
    printf( "Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("\nEnter Name: ");
    scanf("%s", emp.name);
    printf("Enter City: ");
    scanf("%s", emp.city);
    printf("\nEnter Salary: ");
    scanf("%d",&emp.salary);

    // print  the data of employee
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("City: %s\n", emp.city);
    printf("Salary: %d\n", emp.salary);


    return 0;
}