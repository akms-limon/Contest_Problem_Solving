#include<stdio.h>
int main()
{
    int i, j, a=7, b;
    for(i=1; i<=9; i=i+2)
    {
        for(j=a, b=1; j>=5, b<=3; j=j-1, b++)
        {
            printf("I=%d J=%d\n", i, j);
        }
        a=a+2;
    }
    return 0;
}