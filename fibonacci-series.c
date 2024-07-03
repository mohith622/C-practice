
#include <stdio.h>

int main() {
    int i,N, a = 0, b = 1, nextTerm;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= N; ++i) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}
