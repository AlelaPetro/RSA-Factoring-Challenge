#include <stdio.h>
#include <math.h>

int main() {
  // The integer to factorize
  int n = 15;

  // Find the prime factorization of n
  printf("The prime factorization of %d is: ", n);
  for (int i = 2; i <= sqrt(n); i++) {
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }
  if (n > 1) {
    printf("%d", n);
  }
  printf("\n");

  return 0;
}
