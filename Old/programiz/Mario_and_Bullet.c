#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, c, b=0, x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        a=y/x;
        c=z-a;
        {
            if(a<=z)
            {
                printf("%d\n", c);
            }
            else if(a>z)
            {
                printf("%d\n", b);
            }
        }
    }
    
    return 0;
}