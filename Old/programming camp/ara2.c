#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i] );
    }
    for(i=0;i<n;i++){
        if(ara[i]%2==0)
    {
        ara[i]=ara[i]/2;
    }
    else
    {
        ara[i]=ara[i]*2;
    }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}