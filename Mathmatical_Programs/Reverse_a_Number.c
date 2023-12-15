#include <stdio.h>

int main() {

  int n, rev, rem;
  printf("Enter= ");
  scanf("%d", &n);

  while (n != 0) {
    rem = n % 10;
    rev = reverse * 10 + rem;
    n = n/10;
  }
printf("Reversed number = %d", reverse);

  return 0;
}
