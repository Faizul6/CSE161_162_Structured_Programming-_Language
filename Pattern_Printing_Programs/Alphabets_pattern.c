#include <stdio.h>
int main()
{
    int row,col,n;
    printf("Number of ROWS= ");
    scanf("%d",&n);
    for (row = 1; row<=n; row++)
    {
     for (col = 1; col <= row; col++)
     {
      printf("%c ",col+64);
     }
     printf("\n");
    }
    return 0;
}


