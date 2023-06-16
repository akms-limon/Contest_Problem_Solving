#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int i=0;
    double sum=0, avg;
    while(i<n)
    {
        scanf("%d", &ara[i]);
        sum=sum+ara[i];
        i++;
    }
    avg=sum/n;
    printf("%lf\n", sum);
    printf("%lf\n", avg);
    return 0;

}