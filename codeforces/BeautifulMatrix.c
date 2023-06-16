#include <stdio.h>

int main()
{
    int ara[5][5];
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &ara[i][j]);
            if (ara[i][j]==1)
            {
                a=2-i;
                b=2-j;
                if(a<0)
                a=-a;
                if(b<0)
                b=-b;
            }
        }
    }
    printf("%d\n", a+b);
    return 0;
}