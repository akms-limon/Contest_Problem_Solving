#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d",&n);
    for(j=0; j<10; j++)
    {
        printf("N[%d] = %d\n", j, n);
        n=n+n;
    }
    return 0;
}