#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, a=2;
    for(i=2; i<=n; i=i+2)
    {
        printf("%d^%d = %d\n", i, a, i*i);
    }
    return 0;
}