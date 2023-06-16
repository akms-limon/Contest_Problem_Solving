#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k, v;
        scanf("%d%d%d", &n, &k, &v);
        int ara[n];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
            count=count+ara[i];
        }
        int a=(v*(n+k))-count;
        int x=a/k;
        if(a%k==0 && a>=0)
        {
            printf("%d\n", x);
        }
        else
        {
            printf("-1\n");
        }

    }
	return 0;
}