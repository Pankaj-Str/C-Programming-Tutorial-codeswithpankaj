#include <stdio.h>

void func() {
    goto label;

label:
    printf("Inside function scope\n");
}

int main() {
    func();
    return 0;
}