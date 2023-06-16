#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a, i, j, k;
    while(t--)
    {
        scanf("%d", &a);
        for(i=1; i<=a; i=i+3)
        {
            if(a==i)
            {
                printf("HUGE\n");
            }
        }
        for(j=2; j<=a; j=j+3)
        {
            if(a==j)
            {
                printf("SMALL\n");
            }
        }
        for(k=3; k<=a; k=k+3)
        {
            if(a==k)
            {
                printf("NORMAL\n");
            }
        }
    }
    
    return 0;
}