#include <stdio.h>
int main()
{
    int i,size,sum;
    scanf("%d",&size);
    int a[size];


    for(i=0; i<size; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

    for(i=0; i<size; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of array element=%d ",sum);


    return 0;
}
