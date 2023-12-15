#include <stdio.h>

int main()
{
    int n;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);


    /* If isEven() function returns 0 then the number is even */
    if(Even(n))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

}
int Even(int n)
{
    return !(n & 1);
}
