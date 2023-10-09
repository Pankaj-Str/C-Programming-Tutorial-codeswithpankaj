#include <stdio.h>

void function() {
    static int count = 0;
    count++;
    printf("Static Variable: %d\n", count);
}

int main() {
    function();
    function();
    function();
    return 0;
}
