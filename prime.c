
#include <stdio.h>

int main() {
    int i,N, isPrime = 1;
    printf("Enter N: ");
    scanf("%d", &N);

    for ( i = 2; i <= N / 2; ++i) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is prime.\n", N);
    } else {
        printf("%d is not prime.\n", N);
    }
    return 0;
}
