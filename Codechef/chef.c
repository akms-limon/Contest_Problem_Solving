#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int count=0;
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        for (int i = 0; i < n-1; i++)
        {
            if(ara[i]<=ara[i+1])
            {
                count++;
            }
        }
        printf("%d\n", count);
        if(count==(n-1))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
	return 0;
}