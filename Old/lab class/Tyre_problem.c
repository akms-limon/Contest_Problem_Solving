#include<stdio.h>
int main()
{
    int t, a, b, c;
    scanf("%d %d %d %d", &t, &a, &b, &c);
    if(c==t || c==a || c==b)
    printf("Yes\n");
    else
    printf("no\n");
    return 0;
}