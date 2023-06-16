#include<stdio.h>
int main()
{
    int n, b=0;
    double sum=0, avg;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        if(ara[i]%2!=0)
        {
            sum=sum+ara[i];
            b++;
        }
    }
    if(sum==0)
    {
        printf("Null");
    }
    else
    {
    avg=sum/b;
    printf("%lf\n", sum);
    printf("%lf\n", avg);
    }
    return 0;
}