#include<stdio.h>

// Bit Fields Example

struct student
{
    char name[50];
    int roll;
    float marks;
    int age : 5;
};

int main()
{
    struct student s1;
    printf("Enter the name: ");
    scanf("%s", s1.name);
    printf("Enter the roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter the marks: ");
    scanf("%f", &s1.marks);
    printf("Enter the age: ");
    scanf("%d", &s1.age);
    
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %f\n", s1.marks);
    printf("Age: %d\n", s1.age);
    
    return 0;
}