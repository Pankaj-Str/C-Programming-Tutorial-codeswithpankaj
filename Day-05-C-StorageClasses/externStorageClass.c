// File1.c
#include <stdio.h>

int globalVar = 42;

// File2.c
#include <stdio.h>

extern int globalVar;

int main() {
    printf("Extern Variable: %d\n", globalVar);
    return 0;
}
