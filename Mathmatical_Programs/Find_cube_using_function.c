#include <stdio.h>

int cube(int n);

int main()
{
    int n,c;
    printf("Enter= ");
    scanf("%d", &n);
    c = cube(n);

    printf("Cube of %d is %d", n, c);

    return 0;
}

int cube(int n)
{
    return (n* n* n);
}
