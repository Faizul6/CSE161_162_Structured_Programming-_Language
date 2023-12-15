#include <stdio.h>
int main()
{
    int row,col,n;
    printf("If you are calculating Columns then it must be <=26.As English have 26 alphabets if the value is greater than 26 then the output will be correspondent to Asci value.\n")
;    printf("Number of Columns= ");
    scanf("%d",&n);
    for (row = n; row>=1; row--)
    {
     for (col = 1; col <= row; col++)
     {
      printf("%c ",col+64);
     }
     printf("\n");
    }
    return 0;
}



