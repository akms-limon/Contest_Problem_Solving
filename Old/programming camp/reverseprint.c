#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(int i=n-1; i>=0; i-- )
    {
        printf("%d \n", ara[i]);
    }
    return 0;
}