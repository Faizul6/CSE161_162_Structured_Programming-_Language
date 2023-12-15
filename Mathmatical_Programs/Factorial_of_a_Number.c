#include <stdio.h>
int main() {
    int n, i,fact;
    fact = 1;
    printf("Enter= ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Factorial of %d = %d", n, fact);
    }

    return 0;
}
