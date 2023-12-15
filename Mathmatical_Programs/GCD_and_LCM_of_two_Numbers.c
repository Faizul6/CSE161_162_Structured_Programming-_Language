#include <stdio.h>
int main()
{
    int n1, n2,num1,num2,rem;
    printf("Enter n1= ");
    scanf("%d",&n1);
    printf("Enter n2= ");
    scanf("%d",&n2);
    num1=n1;
    num2=n2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    int gcd,lcm;
    gcd=n1;
    lcm=(num1*num2)/gcd;
    printf("GCD = %d\n",gcd);
    printf("LCM = %d",lcm);

    return 0;
}
