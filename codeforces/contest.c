#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(ara[i]+1 != ara[i+1])
        {
        printf("Not Good\n");
        break;
        }
    }
    return 0;
}