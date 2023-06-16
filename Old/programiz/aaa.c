#include<stdio.h>
int main()
{
    int n, b=0, t;
    scanf("%d", &t);
    long long x;
    while(t--)
    {
        scanf("%d", &n);
        int ara[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &ara[i]);
        }
        long long p=0;
        for (int j = 0; j < n-1; j++)
        {
            for(int k = 1; k < n; k++)
            {
                if(ara[j]+ara[k] < ara[j]*ara[k])
                p+=1;
            }
        }
        x=n*(n-1)/2 - p;
        if(x>0)
        printf("%ld\n", x);
        else
        printf("%d", b);
    }
    return 0;
}