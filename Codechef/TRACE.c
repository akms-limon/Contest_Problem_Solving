#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int a=n*n;
        int sum=0;
        int sum1=0;
        int i, j;
        for (int i = 1, j=n+1; i <= a, j <= a-1; i=i+(n+1), j=j+(n+1))
        {
            sum = sum+i;
            sum1=sum1+j;
        }
        int sum2=0;
        int b=n*(n-1);
        for (int i = 2; i <= b; i=i+(n+1))
        {
            sum2=sum2+i;
        }
        int x=sum+sum1;
        int y=sum+sum2;
        if (n==1)
        {
            if (k==1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else if (n>1)
        {
        if (k==0)
        {
            if(x%2==0 || y%2==0)
            printf("Yes\n");
            else
            printf("No\n");
        }
        else if (k==1)
        {
            if(x%2!=0 || y%2!=0)
            printf("Yes\n");
            else
            printf("No\n");
        }
        }
    }
    return 0;
}