#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    int zip;
};

 Person {
    char name[50];
    int age;
    struct Address address;
};struct

int main() {
    struct Person person = {"Nishant", 28, {"123 Maple St", "Springfield", 12345}};
    printf("Name: %s\n", person.name);
    printf("City: %s\n", person.address.city);
    return 0;
}