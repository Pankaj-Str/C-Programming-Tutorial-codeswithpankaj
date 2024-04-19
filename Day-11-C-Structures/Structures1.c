#include<stdio.h>


// Structures example

struct student
{
    char name[50];
    int roll;
    float marks;
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
    
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %f\n", s1.marks);
    
    return 0;
}