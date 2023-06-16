#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int count = 0;
        scanf("%d", &n);
        int ara[n], ara1[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ara1[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ara1[i]);
        }
        
    }
    return 0;
}