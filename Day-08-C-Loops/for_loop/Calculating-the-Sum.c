#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    printf("Sum of numbers from 1 to %d is %d\n", N, sum);

    return 0;
}
