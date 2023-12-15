#include <stdio.h>
int main() {

  int i, n,t1,t2,n_Term;
  t1 = 0;
  t2= 1;
  n_Term = t1 + t2;
  printf("Enter= ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", n_Term);
    t1 = t2;
    t2 = n_Term;
    n_Term = t1 + t2;
  }

  return 0;
}
