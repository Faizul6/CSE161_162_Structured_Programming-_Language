#include <stdio.h>
int main()
{
    int Rows,i,j;
    printf("Rows= ");
    scanf("%d", &Rows);
    for (i = 1; i <= Rows; i++)
    {
     for (j = 1; j <= i; j++)
     {
      printf("%d ", i);
     }
     printf("\n");
    }
    return 0;
}
