#include<stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main(){

    struct Person pr;

    // put value into struct
    strcpy(pr.name, "joy");
    pr.age = 23;
    pr.height = 4.5;
    
    // print value from struct
    printf("%s\n",pr.name);
    printf("%d\n",pr.age);
    printf("%f\n",pr.height);   

    return 0;
}
