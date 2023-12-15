#include <stdio.h>
int max_n(int n1, int n2);
int min_n(int n1, int n2);
int main()
{
    int n1, n2, max, min;
    printf("Enter n1= ");
    scanf("%d",&n1);
    printf("Enter n2= ");
    scanf("%d",&n2);
    max = max_n(n1, n2);
    min = min_n(n1,n2);

    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}


int max_n(int n1, int n2)
{
    return (n1 > n2 ) ? n1 : n2;
}

int min_n(int n1, int n2)
{
    return (n1 > n2 ) ? n2 : n1;
}
