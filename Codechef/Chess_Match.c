#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);
        int c=(180+n)*2;
        int d=a+b;
        printf("%d\n", c-d);
    }
    return 0;
}