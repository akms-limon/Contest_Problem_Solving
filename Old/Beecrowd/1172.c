#include<stdio.h>
int main()
{
    int ara[10];
    int i, a=1;
    for(i=0; i<10; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<10; i++)
    {
        if(ara[i]<=0)
        printf("X[%d] = %d\n", i, a);
        else
        printf("X[%d] = %d\n", i, ara[i]);
    }
    return 0;
}