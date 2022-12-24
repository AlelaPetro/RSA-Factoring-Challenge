#include <stdio.h>

int main() {
    // Number to be factorized
    int n = 100;

    // Find the factorization of n
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            printf("%d x %d\n", i, n/i);
            break;
        }
    }

    return 0;
}
