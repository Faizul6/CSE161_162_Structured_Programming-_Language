#include <stdio.h>
int main()
{
    int i,size;
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

    return 0;
}
