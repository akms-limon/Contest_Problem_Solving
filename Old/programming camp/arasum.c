#include<stdio.h>
int main()
{
    long long n;
    long long ara[n];
    scanf("%lld", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &ara[i]);
    }
    int sum=1;
    for(int i=0; i<n; i++)
    {
        sum=sum*ara[i];
    }
    printf("sum is:%lld", sum);
    return 0;
}