#include <math.h>
#include <stdio.h>

int main() {
    int n, exp, result;
    printf("Enter= ");
    scanf("%d", &n);
    printf("Enter exponent= ");
    scanf("%d", &exp);

    // calculates the power
    result = pow(n, exp);

    printf("Power of %d to the power %d= %d",n,exp,result);
    return 0;
}

