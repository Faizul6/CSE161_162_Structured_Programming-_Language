//problem link:https://www.geeksforgeeks.org/c-program-to-check-whether-a-number-is-prime-or-not/
//Solution:
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter: ");
    scanf("%d", &a);

    if (prime(a))
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }

}
int prime(int a)
{
    int i;
    if (a <= 1)
    {
      return 0;
    }
    for (i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

