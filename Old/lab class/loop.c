#include<stdio.h>
int main()
{
    int n;
    double sum=0, avg;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        sum+=ara[i];
    }
    avg=sum/n;
    printf("%lf\n", sum);
    printf("%lf\n", avg);
    return 0;
}