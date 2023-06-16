#include<stdio.h>
int main()
{
    int even, odd;
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0;  i<n; i++)
    {
        if(ara[i]%2==0)
        {
            even=ara[i]/2;
            printf("%d\n", even);
        }
        else
        {
            odd=ara[i]*2;
            printf("%d\n", odd);
        }
    }
    return 0;
}