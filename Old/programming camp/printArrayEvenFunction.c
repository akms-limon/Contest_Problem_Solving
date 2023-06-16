#include <stdio.h>

void printara(int ara[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(ara[i]%2 != 0)
        printf("%d\n", ara[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    printara(ara, n);
    return 0;
}