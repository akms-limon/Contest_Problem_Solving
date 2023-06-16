#include <stdio.h>

int main()
{
    int n;
    int a=0, b=0, c=0;
    scanf("%d", &n);
    int ara[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ara[i][j]);
        }
        a=a+ara[i][0]; 
        b=b+ara[i][1];
        c=c+ara[i][2];
    }
    if(a==0 && b==0 && c==0)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}